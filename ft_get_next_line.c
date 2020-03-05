/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlageard <vlageard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:16:22 by vlageard          #+#    #+#             */
/*   Updated: 2020/03/05 19:03:38 by vlageard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int		ret_free_str(int ret, char *str)
{
	free(str);
	return (ret);
}

char	*ft_strcut_before(int i, char *str)
{
	int		j;
	char	*tmp;

	j = 0;
	if ((ft_strlen(str) - i) == 0)
	{
		if (!(tmp = (char *)malloc(sizeof(char))))
			return (NULL);
		tmp[0] = 0;
		free(str);
		return (tmp);
	}
	if (!(tmp = (char *)malloc((ft_strlen(str) - i) * sizeof(char))))
		return (NULL);
	while (str[i + j + 1])
	{
		tmp[j] = str[i + j + 1];
		j++;
	}
	tmp[j] = 0;
	free(str);
	return (tmp);
}

int		ft_strcpy_woc(char *str, char **line, char c)
{
	int		i;
	char	*dup;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(dup = (char *)malloc((i + 1) * sizeof(char))))
		return (-1);
	i = 0;
	while (str[i] && str[i] != c)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	*line = dup;
	return (i);
}

int		ft_get_next_line(int fd, char **line)
{
	static char	*str;
	static int	sz_read;
	char		buff[BUFFER_SIZE + 1];
	char		*tmp;

	if (!str)
		str = ft_strdup("");
	if (!ft_strchr(str, '\n'))
	{
		while ((sz_read = read(fd, buff, BUFFER_SIZE)) > 0)
		{
			buff[sz_read] = 0;
			tmp = ft_strjoin(str, buff);
			free(str);
			str = tmp;
			if (ft_strchr(str, '\n'))
				break ;
		}
	}
	if (sz_read < 0)
		return (ret_free_str(-1, str));
	str = ft_strcut_before(ft_strcpy_woc(str, line, '\n'), str);
	if (sz_read == 0 && !str[0])
		return (ret_free_str(0, str));
	return (1);
}
