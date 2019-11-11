/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 02:48:57 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/11 06:25:13 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (*(src + i) != 0)
	{
		if (i == size - 1)
		{
			*(dest + i) = 0;
		}
		else if (i < size)
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}
	if (*(src + i) == 0)
	{
		*(dest + i) = 0;
	}
	return (i);
}
