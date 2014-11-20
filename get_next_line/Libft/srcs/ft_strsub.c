/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:30:38 by spochez           #+#    #+#             */
/*   Updated: 2014/11/15 12:21:52 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (s)
		res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = 0;
	return (res);
}
