/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:52:29 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:17:15 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	char	*tpst;
	char	*tprc;

	tpst = dst;
	tprc = (char *)src;
	i = 0;
	if (tpst && tprc)
	{
		while (i < n && tprc[i])
		{
			tpst[i] = tprc[i];
			i++;
		}
		while (i < n)
		{
			tpst[i] = 0;
			i++;
		}
	}
	return (dst);
}
