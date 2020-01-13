/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoabase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:41:38 by vlageard          #+#    #+#             */
/*   Updated: 2020/01/13 19:13:16 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		is_base_valid(const char *base)
{
	int i;
	
	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i + 1])
		{
			if (ft_iscinstr(base[i], base + i + 1))
				return (0);
		}
		else
			break;
		i++;
	}
	return (1);
}

static int		get_str_size(unsigned long n, unsigned long base_len)
{
	int	str_size;
	
	str_size = 0;
	while (n >= base_len)
	{
		str_size++;
		n = n / base_len;
	}
	str_size++;
	return (str_size);
}

char			*ft_ultoabase(unsigned long n, const char *base)
{
	char 			*str;
	unsigned long	base_len;
	int				str_size;
	int				i;
	
	if (!is_base_valid(base))
		return (NULL);
	base_len = (unsigned long)ft_strlen(base);
	str_size = get_str_size(n, base_len);
	if (!(str = (char *)malloc(sizeof(char) * (str_size + 1))))
		return (NULL);
	i = str_size - 1;
	while (n >= base_len)
	{
		str[i] = base[n % base_len];
		n = n / base_len;
		i--;
	}
	str[0] = base[n];
	str[str_size] = 0;
	return (str);
}