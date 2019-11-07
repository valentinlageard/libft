/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:48:01 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/05 16:02:10 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *s_cpy;

	i = 0;
	s_cpy = s;
	while (i < n)
	{
		*s_cpy = c;
		s_cpy++;
		i++;
	}
	return (s);
}
