/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 13:27:56 by vlageard          #+#    #+#             */
/*   Updated: 2020/01/09 15:51:27 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	utoa_len(unsigned int n)
{
	int i;

	i = 0;
	if (n <= 9)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char		*ft_utoa(unsigned int n)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = utoa_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		str[len - 1 - i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[len] = 0;
	return (str);
}
