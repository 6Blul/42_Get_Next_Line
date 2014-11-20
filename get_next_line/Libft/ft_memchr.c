/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:38:52 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:10:58 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *)s;
	if (res)
	{
		while (i < n)
		{
			if (res[i] == (unsigned char)c)
				return (&res[i]);
			i++;
		}
	}
	return (NULL);
}
