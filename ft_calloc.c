/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:41:08 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/06 19:46:29 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *new_mem;

	if (!nmemb || !size)
		return (NULL);
	if (!(new_mem = malloc(size*nmemb)))
		return (NULL);
	bzero(new_mem, size*nmemb);
	return (new_mem);
}
