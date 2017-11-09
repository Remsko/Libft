/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:28:10 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/09 10:18:54 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void restrict *dst, const void restrict *src, int c, \
		size_t n)
{
	size_t			i;
	unsigned char	dest;
	unsigned char	source;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] = (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
