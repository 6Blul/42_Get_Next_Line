/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:35:09 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:19:01 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static int		ft_end(char const *s)
{
	static int	i;

	i = ft_strlen(s) - 1;
	if (s[i])
	{
		while (ft_is_space(s[i]) && i >= 0)
			i--;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	size_t		end;
	char		*res;

	i = 0;
	j = 0;
	res = NULL;
	if (!s)
		return (NULL);
	else
	{
		end = ft_end(s);
		while (ft_is_space(s[i]) && s[i])
			i++;
		if (i == 0 && end == ft_strlen(s) - 1)
			return (ft_strdup(s));
		if (i > end)
			return (NULL);
		res = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		while (i <= end && s[i])
			res[j++] = s[i++];
		res[j] = '\0';
	}
	return (res);
}
