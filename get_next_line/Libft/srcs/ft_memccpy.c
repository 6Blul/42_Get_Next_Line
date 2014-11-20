/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:11:39 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:10:51 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*tpst;
	char			*tprc;
	size_t			i;
	unsigned char	t;

	i = 0;
	tpst = (char *)dst;
	tprc = (char *)src;
	t = (unsigned char)c;
	if (src)
	{
		while (i < n)
		{
			tpst[i] = tprc[i];
			if (tprc[i] == t)
				return (dst + (i + 1));
			i++;
		}
	}
	return (NULL);
}
