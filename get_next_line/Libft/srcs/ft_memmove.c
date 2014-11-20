/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:23:55 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:11:35 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tpst;

	if (dst && src)
	{
		if ((tpst = (void *)malloc(len)) == NULL)
			return (NULL);
		ft_memcpy(tpst, src, len);
		ft_memcpy(dst, tpst, len);
		free(tpst);
	}
	return (dst);
}
