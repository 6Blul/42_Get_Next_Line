/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 20:29:42 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:17:24 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*res;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strnlen(s1, n);
	res = malloc(sizeof(char) * len + 1);
	while (s1[n])
	{
		res[i] = s1[n];
		i++;
		n++;
	}
	return (res);
}
