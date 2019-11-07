/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:06:22 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/05 16:13:26 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *ptr_dest;
	const char *ptr_src;

	i = 0;
	ptr_dest = dest;
	ptr_src = src;
	while (i < n)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		i++;
	}
	return (dest);
}
