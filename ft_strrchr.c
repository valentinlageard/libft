/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:19:28 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/11 01:24:42 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if ((char)(s[ft_strlen(s) - i]) == c)
			return ((char *)&(s[ft_strlen(s) - i]));
		i++;
	}
	return (NULL);
}
