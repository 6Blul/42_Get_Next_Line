/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:34:44 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:34:11 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

static int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int			ft_toupper(int c)
{
	char	p;
	int		new;

	p = (char)c;
	if (ft_is_lower(p))
	{
		p -= 32;
		new = (int)p;
		return (new);
	}
	else
		return (c);
}
