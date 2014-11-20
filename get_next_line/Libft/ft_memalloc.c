/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:34:15 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:10:42 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	ret = NULL;
	if (size)
	{
		if ((ret = (void *)malloc(size)) == NULL)
			return (NULL);
		ft_bzero(ret, size);
	}
	return (ret);
}
