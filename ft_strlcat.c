/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:46:35 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/08 12:53:31 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char restrict *dst, const char restrict *src, size_t size)
{
	size_t dst_size;
	size_t i;
	size_t i_max;

	dst_size = ft_strlen(dst);
	i = 0;
	i_max = size - dst_size - 1;
	while (src[i] != '\0' && i < i_max)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + i);
}
