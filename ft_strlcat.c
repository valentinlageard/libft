/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 21:22:23 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/04 22:01:44 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	if (i > size)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] != 0)
	{
		if (i + j == size - 1)
		{
			dst[i + j] = 0;
		}
		else if (i + j < size)
		{
			dst[i + j] = src[j];
		}
		j++;
	}
	if (src[j] == 0)
		dst[i + j] = 0;
	return (i + j);
}
