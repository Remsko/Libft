/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:46:35 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/14 17:09:33 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	src_len -= src_len - size;
	if (src_len < size - dst_len)
		ft_strncpy(dst + dst_len, src, src_len + 1);
	else if (src_len > size - dst_len)
	{
		ft_strncpy(dst + dst_len, src, size - 1 - dst_len);
		dst[size - 1] = '\0';
	}
	return (src_len + dst_len);
}
