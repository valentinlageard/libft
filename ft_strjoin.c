/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:35:45 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/05 15:42:37 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*joined_str;

	i = 0;
	j = 0;
	if (!(joined_str = (char *)malloc((ft_strlen(s1) +
	ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	while (s1[i])
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined_str[i + j] = s2[j];
		j++;
	}
	joined_str[i + j] = 0;
	return (joined_str);
}
