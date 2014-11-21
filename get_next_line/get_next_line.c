/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 15:14:20 by spochez           #+#    #+#             */
/*   Updated: 2014/11/21 16:10:31 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_refresh(char **line, char **split)
{
	static int	j;

	if (!split[j])
		return (-1);
	if (*line)
	{
		*line = NULL;
		free (*line);
	}
	*line = (char *)malloc(sizeof(char) * (ft_strlen(split[j]) + 1));
	*line = ft_strdup(split[j]);
	if (split[j + 1])
		return (1);
	j++;
	return (0);
}

int		get_next_line(int const fd, char **line)
{
	char		*buff;
	char		**split;
	static char	*res;
	int			rd;
	static int	i;
	int			rf;

	rd = 1;
	buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
	while (rd != 0)
	{
		rd = read(fd, buff, BUFF_SIZE);
		if (i == 0)
			res = ft_strdup(buff);
		else
			res = ft_strjoin(res, buff);
		i++;
	}
	split = ft_strsplit(res, '\n');
	rf = ft_refresh(&(*line), split);
	free(buff);
	return (rf);
}
