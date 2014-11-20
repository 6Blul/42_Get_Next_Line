/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:39:09 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:34:18 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

static int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int			ft_tolower(int c)
{
	char	p;
	int		new;

	p = (char)c;
	if (ft_is_upper(p))
	{
		p += 32;
		new = (int)p;
		return (new);
	}
	else
		return (c);
}
