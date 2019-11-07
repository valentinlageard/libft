/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:56:52 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/07 21:11:41 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *ptr_src;
	unsigned char *ptr_dest;

	i = 0;
	ptr_src = (unsigned char*)src;
	ptr_dest = (unsigned char*)dest;
	if (ptr_dest < ptr_src)
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			ptr_dest[n - 1 - i] = ptr_src[n - 1 - i];
			i++;
		}
	}
	return (ptr_dest);
}
