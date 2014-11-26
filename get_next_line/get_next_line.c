/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 14:32:56 by spochez           #+#    #+#             */
/*   Updated: 2014/11/26 04:15:49 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_rchr(char *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (ft_strlen(s) + 1);
}

int		ft_getbf(char *buff, int rd, char **line)
{
	static char	*res;
	char		*tp;
	size_t		i;

	//ft_putendl(buff);
	if (!buff || rd == 0)
		return (0);
	if (!res)
		res = ft_strdup(buff);
	else
		res = ft_strjoin(res, buff);
	tp = ft_strdup(res);
	//ft_putendl(res);
	//ft_putstr("Next->");
	i = ft_rchr(tp, '\n');
	if (i != ft_strlen(res) + 1)
	{
		*line = ft_strndup(res, i);
		tp = ft_strdnup(res, i);
		//ft_putstr(res);
	}
	if (!*line)
		return (-1);
	if (rd == 0)
		return (0);
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	char		*buff;
	int			rd;
	int			r;

	rd = 1;
	buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
	if (!buff)
		return (-1);
	while (rd != 0)
	{
		rd = read(fd, buff, BUFF_SIZE);
		r = ft_getbf(buff, rd, line);
		if (rd == -1)
			return (-1);
	}
	return (r);
}
