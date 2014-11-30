/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 18:36:37 by spochez           #+#    #+#             */
/*   Updated: 2014/11/30 03:29:24 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		gnl;

	gnl = 1;
	line = NULL;
	(void)ac;
	(void)av;
	/*if (ac > 1)
		fd = open(av[1], O_RDONLY);
	else
		fd = 0;*/
	fd = 42;
	while (gnl > 0)
	{
		gnl = get_next_line(fd, &line);
		printf("%s\n", line);
		printf ("%i\n", gnl);
	}
	return (0);
}
