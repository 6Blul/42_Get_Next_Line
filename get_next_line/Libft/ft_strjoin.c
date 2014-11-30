/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:07:44 by spochez           #+#    #+#             */
/*   Updated: 2014/11/29 00:13:37 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		nlen;
	char	*new;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	nlen = len1 + len2;
	new = malloc(sizeof(char) * nlen + 1);
	new = ft_strcpy(new, s1);
	new = ft_strcat(new, s2);
	return (new);
}
