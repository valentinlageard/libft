/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:08:46 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/11 04:40:44 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		is_trim_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int		count_trim_start(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (!is_trim_set(s1[i], set))
			break;
		i++;
	}
	return (i);
}

static int		count_trim_end(char const *s1, char const *set, int start_trim)
{
	int i;
	int trim_end_count;

	i = 0;
	trim_end_count = 0;
	while (s1[i+start_trim])
	{
		if (is_trim_set(s1[i+start_trim], set))
			trim_end_count += 1;
		else
			trim_end_count = 0;
		i++;
	}
	return (trim_end_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		new_len;
	char	*new_str;
	int		start_trim;

	i = 0;
	start_trim = count_trim_start(s1, set);
	new_len = ft_strlen(s1) - start_trim - count_trim_end(s1, set, start_trim);
	if (!(new_str = (char*)malloc((new_len + 1)*sizeof(char *))))
		return (NULL);
	while (i < new_len)
	{
		new_str[i] = s1[i + start_trim];
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
