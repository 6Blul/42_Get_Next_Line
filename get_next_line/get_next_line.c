/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 18:43:33 by spochez           #+#    #+#             */
/*   Updated: 2014/11/23 15:50:45 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

int		ft_refresh(char **line, char **split, int i)
{
	if (!split[i])
		return (-1);
	if (*line)
		free (*line);
	*line = ft_strdup(split[i]);
	if (split[i + 1] == 0)
		return (0);
	return (1);
}

int		get_next_line(int fd, char **line)
{
	char			*buff;
	static char		*str;
	static char		**split;
	static int		i;
	int				rd;
	static int		stch;
	static int		ct;

	rd = 1;
	buff = malloc(sizeof(char) * BUFF_SIZE + 1);
	if (stch != 1)
	{
		while (rd != 0)
		{
			rd = read(fd, buff, BUFF_SIZE);
			if (ct == 0)
				str = ft_strdup(buff);
			else
				str = ft_strjoin(str, buff);
			ct++;
		}
	}
	//ft_putstr(str);
	stch = 1;
	if (str == NULL || BUFF_SIZE == 0 || fd <= 0)
		return (-1);
	split = ft_strsplit(str, '\n');
	//while (*split)
	//	ft_putendl(*split++);
	free (buff);
	return (ft_refresh(&(*line), split, i++));
}
