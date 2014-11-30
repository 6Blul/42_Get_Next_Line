/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/30 06:37:07 by spochez           #+#    #+#             */
/*   Updated: 2014/11/30 06:42:02 by spochez          ###   ########.fr       */
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

// teste la valeur de retour de gnl en cas d'erreur (test pour fd unavailable)
int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		gnl;

	gnl = 1;
	line = NULL;
	(void)ac;
	(void)av;
	fd = 40;
	while (gnl > 0)
	{
		gnl = get_next_line(fd, &line);
		printf("%s\n", line);
		printf("%i\n", gnl);
	}
	return (0);
}
