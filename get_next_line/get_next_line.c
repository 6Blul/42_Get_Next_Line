/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 16:03:55 by spochez           #+#    #+#             */
/*   Updated: 2014/11/20 16:14:12 by spochez          ###   ########.fr       */
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
	char		*buff;
	static char	*str;
	char		**split;
	int			count;
	static int	rd;
	static int	stch;
	static int	i;

	rd = 1;
	count = 0;
	buff = malloc(sizeof(char) * BUFF_SIZE + 1);
	while (rd != 0 && stch != 1)
	{
		rd = read(fd, buff, BUFF_SIZE);
		if (count == 0)
			str = ft_strdup(buff);
		else
			str = ft_strjoin(str, buff);
		count++;
	}
	stch = 1;
	if (buff == NULL || BUFF_SIZE == 0 || fd <= 0)
		return (-1);
	split = ft_strsplit(buff, '\n');
	free (buff);
	return (ft_refresh(&(*line), split, i++));
}
