/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 23:14:30 by spochez           #+#    #+#             */
/*   Updated: 2014/11/27 19:51:36 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_read(int const fd, char *buff, char **line)
{
	char		*pos;
	int			rd;

	rd = 1;
	pos = NULL;
	while (rd != 0)
	{
		rd = read(fd, buff, BUFF_SIZE);
		//ft_putendl(buff);
		if (rd == -1)
			return (-1);
		pos = ft_strchr(buff, '\n');
		//ft_putendl(pos);
		if (pos != NULL)
		{
			*pos = 0;
			*line = ft_strdup(buff);
			buff = ft_strdup(pos);
			return (1);
		}
		else
		{
			if (!*line)
				*line = ft_strdup(buff);
			else
				*line = ft_strjoin(buff, (char *)*line);
		}
		//ft_putendl(*line);
	}
	return (0);
}

int		ft_putline(char *buff, char *pos, char **line)
{
	*line = ft_strdup(buff);
	//ft_putendl(*line);
	buff = ft_strdup(pos);
	//ft_putendl(buff);
	if (!buff || !*line)
		return (-1);
	else
		return (1);
}

int		get_next_line(int const fd, char **line)
{
	static char	*buff;
	char		*pos;
	int			rd;
	static int	i;

	rd = 1;
	if (BUFF_SIZE <= 0)
		return (-1);
	if (!buff)
	{
		buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
		buff[0] = 0;
	}
	//ft_putnbr(i);
	//ft_putendl("--->");
	pos = ft_strchr(buff, '\n');
	//ft_putendl(buff);
	if (pos)
	{
		*pos = 0;
		rd = ft_putline(buff, pos, &(*line));
	}
	else
		rd = ft_read(fd, buff, &(*line));
	//i++;
	return (rd);
}
