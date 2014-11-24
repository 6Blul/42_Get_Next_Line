/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 13:10:06 by spochez           #+#    #+#             */
/*   Updated: 2014/11/24 16:36:22 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_cut(char **line, char *str)
{
	char		**delim;
	//char		*st;
	//char		*st2;
	static int	i;

	delim = ft_strsplit(str, '\n');
	//st = ft_strdup(delim[i]);
	//ft_putendl(st);
	//i++;
	//st2 = ft_strdup(delim[i]);
	//ft_putendl(st2);
	//while (delim[i])
	//{
	//	ft_putendl(delim[i]);
	//	i++;
	//}
	if (*line)
	{
		free (*line);
		*line = NULL;
	}
	if (!delim[i])
		return (-1);
	else
		*line = ft_strdup(delim[i]);
	if (*line == NULL)
		return (-1);
	if (delim[i + 1])
	{
		i++;
		return (1);
	}
	else
	{
		free(delim);
		return (0);
	}
}

int		get_next_line(int const fd, char **line)
{
	char		*buff;
	static char	*str;
	static int	ct;
	int			rd;
	static int	rif;

	rd = 1;
	buff = malloc(sizeof(char) * BUFF_SIZE + 1);
	while (rd != 0 && rif == 0)
	{
		rd = read(fd, buff, BUFF_SIZE);
		if (ct == 0)
			str = ft_strdup(buff);
		else
			str = ft_strjoin(str, buff);
		ct++;
	}
	if (rd < BUFF_SIZE && rif == 0)
		str = ft_strsub(str, 0, (BUFF_SIZE * (ct - 1) + rd));
	//ft_putstr(str);
	free (buff);
	rif = 1;
	return (ft_cut(&(*line), str));
}
