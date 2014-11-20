/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:00:28 by spochez           #+#    #+#             */
/*   Updated: 2014/11/15 12:21:45 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*res;

	res = malloc(sizeof(char) * size + 1);
	if (res == NULL)
		return (NULL);
	else
		ft_bzero((void *)res, size);
	return (res);
}
