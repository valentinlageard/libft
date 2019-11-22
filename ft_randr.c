/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 18:37:56 by vlageard          #+#    #+#             */
/*   Updated: 2019/11/22 18:52:08 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_randr(unsigned int min, unsigned int max)
{
	if (max <= min)
		return (0);
	return (ft_rand() % (max - min) + min);
}
