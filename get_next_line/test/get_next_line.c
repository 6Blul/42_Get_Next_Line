/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 18:43:33 by spochez           #+#    #+#             */
/*   Updated: 2014/11/19 18:21:38 by spochez          ###   ########.fr       */
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
	static char		*buff;
	static char		**split;
	static int		i;
	static int		rd;
	static int		stch;

	rd = 1;
	buff = malloc(sizeof(char) * BUFF_SIZE + 1);
	while (rd != 0 && stch != 1)
		rd = read(fd, buff, BUFF_SIZE);
	stch = 1;
	if (buff == NULL || BUFF_SIZE == 0 || fd <= 0)
		return (-1);
	split = ft_strsplit(buff, '\n');
	free (buff);
	return (ft_refresh(&(*line), split, i++));
}
