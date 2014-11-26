/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 14:32:56 by spochez           #+#    #+#             */
/*   Updated: 2014/11/26 20:33:51 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_rchr(char *res, int i, char c)
{
	static int	j;
	int			len;

	i = j;
	len = ft_strlen(res);
	if (res)
	{
		while (i < len)
		{
			if (res[i] == c)
			{
				j = i;
				while (res[j] == c)
					j++;
				return (i);
			}
			i++;
		}
	}
	return (i);
}

void	ft_send(char **line, char *res)
{
	static int	i;
	static int	j;

	if (i != 0)
		j = i;
	i = ft_rchr(res, i, '\n');
	if ((size_t)i == ft_strlen(res) && j != 0)
		*line = ft_strdup(res);
	else
	{
		*line = ft_strsub(res, 0, i);
		res = ft_strsub(res, i, ft_strlen(res) - i);
	}
}

char	*ft_getbf(char *buff, int rd)
{
	static char	*res;

	if (rd == 0)
		return (res);
	if (!res)
		res = ft_strdup(buff);
	else
		res = ft_strjoin(res, buff);
	return (res);
}

int		get_next_line(int const fd, char **line)
{
	char		*buff;
	static char	*res;
	int			rd;
	static int	ifrd;

	rd = 1;
	buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
	if (!buff)
		return (-1);
	if (ifrd == 0)
	{
		while (rd != 0)
		{
			rd = read(fd, buff, BUFF_SIZE);
			res = ft_getbf(buff, rd);
			if (rd == -1)
				return (-1);
		}
	}
	ifrd = 1;
	ft_send(&(*line), res);
	if (!line || !res)
		return (-1);
	return (1);
}
