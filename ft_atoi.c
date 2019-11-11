/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:16:07 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/11 04:38:24 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int i;
	int sign_counter;
	int result;

	i = 0;
	sign_counter = 0;
	result = 0;
	while (ft_is_space(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign_counter++;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10;
		result = result + nptr[i] - '0';
		i++;
	}
	if (sign_counter % 2)
		result = -result;
	return (result);
}
