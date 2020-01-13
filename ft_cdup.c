/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:40:48 by vlageard          #+#    #+#             */
/*   Updated: 2020/01/07 15:40:55 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_cdup(char c)
{
	char	*str;
	
	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	str[0] = c;
	str[1] = 0;
	return (str);
}