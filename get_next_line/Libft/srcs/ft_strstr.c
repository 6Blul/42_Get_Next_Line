/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:28:18 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:18:41 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*res;

	len = ft_strlen(s2);
	res = (char *)s1;
	if (!*s2)
		return (res);
	i = 0;
	j = 0;
	while (res[i])
	{
		if (res[i] == s2[j])
		{
			j++;
			if (j == len)
				return (res + (i - (j - 1)));
		}
		else if (res[i] != s2[j])
			j = 0;
		i++;
	}
	return (NULL);
}
