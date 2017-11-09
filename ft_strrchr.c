/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:36:22 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/08 16:04:23 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i_max;
	size_t i;

	i_max = ft_strlen(s);
	i = i_max;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char*)s);
		i--;
	}
	return (s[i_max + 1]);
}
