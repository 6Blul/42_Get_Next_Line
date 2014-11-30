/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdnup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 03:17:34 by spochez           #+#    #+#             */
/*   Updated: 2014/11/29 03:49:24 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
