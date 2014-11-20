/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:57:10 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:16:15 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ssrc;
	size_t	sdst;
	size_t	i;
	size_t	j;

	sdst = 0;
	ssrc = ft_strlen(src);
	while (dst[sdst])
	{
		if (sdst == size)
			return (sdst + ssrc);
		sdst++;
	}
	if (sdst < size)
	{
		i = sdst;
		j = 0;
		while (src[j] && j < (size - sdst - 1))
			dst[i++] = src[j++];
		dst[i] = 0;
	}
	return (sdst + ssrc);
}
