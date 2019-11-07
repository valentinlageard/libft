/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:17:08 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/05 16:51:11 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	char *ptr_dest;
	const char *ptr_src;

	i = 0;
	ptr_dest = dest;
	ptr_src = src;
	while (i < n && *ptr_src != c)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		i++;
	}
	if (*ptr_src == c)
	{
		ptr_dest++;
		return (ptr_dest);
	}
	else
		return (NULL);
}
