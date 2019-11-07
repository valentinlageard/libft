/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:03:26 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/04 22:04:36 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (*(src + i) != 0)
	{
		if (i == size - 1)
		{
			*(dst + i) = 0;
		}
		else if (i < size)
		{
			*(dst + i) = *(src + i);
		}
		i++;
	}
	if (*(src + i) == 0)
	{
		*(dst + i) = 0;
	}
	return (i);
}
