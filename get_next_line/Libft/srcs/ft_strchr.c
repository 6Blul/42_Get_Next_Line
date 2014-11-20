/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:22:44 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:14:19 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	t;
	size_t	i;
	char	*tp;

	i = 0;
	t = (char)c;
	tp = (char *)s;
	if (tp)
	{
		while (i < (ft_strlen(tp) + 1))
		{
			if (tp[i] == t)
				return (&tp[i]);
			i++;
		}
		if (t == 0)
			return ((char *)s);
	}
	return (NULL);
}
