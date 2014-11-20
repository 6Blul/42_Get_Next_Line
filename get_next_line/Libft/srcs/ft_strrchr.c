/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:22:44 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:18:19 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	t;
	int		i;
	char	*tp;

	t = (char)c;
	tp = (char *)s;
	i = (ft_strlen(tp));
	if (tp)
	{
		while (i >= 0)
		{
			if (tp[i] == t)
				return (&tp[i]);
			i--;
		}
		if (t == 0)
			return ((char *)s);
	}
	return (NULL);
}
