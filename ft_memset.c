/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:57:37 by rpinoit           #+#    #+#             */
/*   Updated: 2018/03/16 11:13:57 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int src, size_t len)
{
	unsigned int	c;
	long int	dst_ptr;

	c = src;
	dst_ptr = (long int)dst;
	if (len >= 8)
	{
		size_t	xlen;
		unsigned long cccc;

		cccc = (unsigned char)c;
		cccc |= cccc << 8;
		cccc |= cccc << 16;
		cccc |= cccc << 32;
		while (dst_ptr % sizeof(long int))
		{
			((unsigned char *)dst_ptr)[0] = c;
			dst_ptr += 1;
			len -= 1;
		}
		xlen = len / (sizeof(long int) * 8);
		while (xlen > 0)
		{
			((long int *)dst_ptr)[0] = cccc;
			((long int *)dst_ptr)[1] = cccc;
			((long int *)dst_ptr)[2] = cccc;
			((long int *)dst_ptr)[3] = cccc;
			((long int *)dst_ptr)[4] = cccc;
			((long int *)dst_ptr)[5] = cccc;
			((long int *)dst_ptr)[6] = cccc;
			((long int *)dst_ptr)[7] = cccc;
			dst_ptr += 8 * sizeof(long int);
			xlen -= 1;
		}
		len %= sizeof(long int);
		xlen = len / sizeof(long int);
		while (xlen > 0)
		{
			((long int *)dst_ptr)[0] = c;
                        dst_ptr += sizeof(long int);
                        len -= 1;
		}
		len %= sizeof(long int);
	}
	while (len > 0)
	{
		((unsigned char *)dst_ptr)[0] = c;
		dst_ptr += 1;
		len -= 1;
	}
	return (dst);
}
