/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 01:40:55 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/11 04:38:41 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		itoa_len(int n)
{
	int i;

	i = 0;
	if (n >= 0 && n <= 9)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;
	int		neg;

	i = 0;
	neg = 0;
	len = itoa_len(n);
	if (n < 0)
		neg = 1;
	if (!(str = (char *)malloc(sizeof(char) * (len + neg + 1))))
		return (0);
	while (i < len)
	{
		if (!neg)
			str[len - 1 - i] = n % 10 + '0';
		else
			str[len - i] = (10 - (n % 10)) + '0' - 10;
		n = n / 10;
		i++;
	}
	if (neg)
		str[0] = '-';
	str[len+neg] = 0;
	return (str);
}
