/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 10:24:08 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:17:56 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	char			*ret;

	if (!*s2)
		return ((char *)s1);
	if (s1 && s2)
	{
		i = 0;
		j = 0;
		while (s1[i] && i < n)
		{
			while (s1[i] != s2[j] && s1[i])
				i++;
			ret = (char *)(&s1[i]);
			while (s1[i] == s2[j] && s1[i] && s2[j] && i < n)
				i++, j++;
			if (!s2[j])
				return (ret);
			else
				j = 0;
		}
	}
	return (NULL);
}
