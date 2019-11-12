/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:36:48 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/12 16:25:36 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	needle_is_found(const char *haystack,
const char *needle, size_t len, size_t i)
{
	size_t j;

	j = 0;
	while (haystack[i + j] && needle[j] && i + j < len)
	{
		if (haystack[i + j] != needle[j])
			return (0);
		j++;
	}
	if (needle[j] == 0)
		return (1);
	else
		return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!needle || !*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (needle_is_found(haystack, needle, len, i))
			{
				ptr = (char *)&haystack[i];
				return (ptr);
			}
		}
		i++;
	}
	return (NULL);
}
