/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:19:28 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/06 19:47:57 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		found;
	char	*s_ptr;
	char	*last_occ;

	found = 0;
	s_ptr = (char *)s;
	while (*s_ptr)
	{
		if (*s_ptr == c)
		{
			last_occ = s_ptr;
			found = 1;
		}
		s_ptr++;
	}
	if (s_ptr == 0 && c == 0)
	{
		last_occ = s_ptr;
		found = 1;
	}
	if (found)
		return (last_occ);
	else
		return (NULL);
}
