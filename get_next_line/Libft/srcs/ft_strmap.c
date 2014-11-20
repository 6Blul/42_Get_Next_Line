/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:52:11 by spochez           #+#    #+#             */
/*   Updated: 2014/11/12 20:16:37 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
