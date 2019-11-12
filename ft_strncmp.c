/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:25:11 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/12 17:43:16 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		cmp;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		cmp = (unsigned char)(s1[i]) - (unsigned char)(s2[i]);
		if (cmp == 0)
			i++;
		else
			return (cmp);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
