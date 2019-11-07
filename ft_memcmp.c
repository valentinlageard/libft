/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 01:21:09 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/07 01:29:03 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				cmp;

	i = 0;
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while ((ptr1[i] != 0 || ptr2[i] != 0) && i < n)
	{
		cmp = (unsigned char)ptr1[i] - (unsigned char)ptr2[i];
		if (cmp == 0)
			i++;
		else
			return (cmp);
	}
	return (0);
}
