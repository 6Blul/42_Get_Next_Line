/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:19:05 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:10:29 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		ft_put_in(char *res, unsigned int i, int n)
{
	if (n >= 10 || n <= -10)
	{
		if (n > 0)
			res[i] = (n % 10) + '0';
		else
			res[i] = -(n % 10) + '0';
		ft_put_in(res, i - 1, n / 10);
	}
	else
	{
		if (n > 0)
			res[i] = n + '0';
		else
			res[i] = -n + '0';
	}
}

char			*ft_itoa(int n)
{
	char		*conv;
	size_t		len;
	int			nb;

	conv = NULL;
	nb = n;
	len = 1;
	while (nb >= 10 || nb <= -10)
	{
		nb /= 10;
		len++;
	}
	conv = (char *)malloc(sizeof(char) * len + 1);
	if (n < 0)
	{
		conv[0] = '-';
		ft_put_in(&conv[1], len - 1, n);
	}
	else
		ft_put_in(conv, len - 1, n);
	if (n < 0)
		conv[len + 1] = 0;
	else
		conv[len] = 0;
	return (conv);
}
