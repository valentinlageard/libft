/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:13:22 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/06 19:47:44 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *s_ptr;

	i = 0;
	s_ptr = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
			return (s_ptr);
		s_ptr++;
		i++;
	}
	if (s[i] == 0 && c == 0)
		return (s_ptr);
	return (NULL);
}
