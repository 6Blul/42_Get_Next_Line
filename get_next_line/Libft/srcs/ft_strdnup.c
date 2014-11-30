/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdnup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 03:17:34 by spochez           #+#    #+#             */
/*   Updated: 2014/11/26 03:25:09 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Copie a partir de n caracteres jusqu'a la fin

#include "libft.h"
#include <stdlib.h>

char	*ft_strdnup(const char *src, size_t n)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(src) - n) + 1);
	while (src[n])
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	dst[i] = 0;
	return (dst);
}
