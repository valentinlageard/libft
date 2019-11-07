/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:36:48 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/06 22:09:10 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		little_is_found(const char *big, const char* little, size_t len, size_t i)
{
	size_t j;

	j = 0;
	while (big[i+j] && little[j] && i+j < len)
	{
		if (big[i+j] != little[j])
			return (0);
		j++;
	}
	if (little[j] == 0)
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	char *ptr;

	if (!*little)
		return ((char*)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			if (little_is_found(big, little, len, i))
			{
				ptr = (char *)&big[i];
				return (ptr);
			}
		}
		i++;
	}
	return (NULL);
}
