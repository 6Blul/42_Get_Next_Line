/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 23:14:30 by spochez           #+#    #+#             */
/*   Updated: 2014/11/30 03:21:29 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_putline(char **buff, char **line)
{
	char		*pos;

	pos = ft_strchr(*buff, '\n');
	if (pos)
		*pos = 0;
	if (!*line)
		*line = ft_strdup(*buff);
	else
		*line = ft_strjoin((char *)*line, *buff);
	if (pos && pos[1])
		*buff = ft_strcpy(*buff, pos + 1);
	else if ((pos && !pos[1]) || !pos)
		ft_bzero((void *)*buff, ft_strlen(*buff));
	return (pos);
}

int		ft_read(int const fd, char **buff, char **line)
{
	char		*pos;
	int			rd;

	rd = 1;
	pos = NULL;
	while (rd != 0)
	{
		rd = read(fd, *buff, BUFF_SIZE);
		if (rd < 0)
			return (-1);
		if (rd == 0)
			return (0);
		(*buff)[rd] = 0;
		pos = ft_putline(buff, &(*line));
		if (pos)
			return (1);
	}
	return (0);
}

int		get_next_line(int const fd, char **line)
{
	static char	*buff;
	int			rd;
	char		*ret;

	*line = NULL;
	rd = 0;
	if (BUFF_SIZE <= 0 || fd < 0)
		return (-1);
	if (!buff)
	{
		buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
		buff[0] = 0;
	}
	if (ft_strchr((buff), '\n') || buff[0])
	{
		ret = ft_putline(&buff, &(*line));
		if (ret)
			rd = 1;
	}
	if (rd == 0)
		rd = ft_read(fd, &buff, &(*line));
	if (*line)
		rd = 1;
	return (rd);
}
