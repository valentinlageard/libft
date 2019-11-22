/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:55:52 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/22 18:51:42 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rand(void)
{
	static unsigned int	lfsr;

	if (!lfsr)
		lfsr = 0xACE2u;
	lfsr ^= lfsr << 13;
    lfsr ^= lfsr >> 17;
    lfsr ^= lfsr << 5;
	return (lfsr);
}