/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:10:00 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/15 13:49:58 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define OVER_HEIGHT 0xFFFFFFFFFFFFFFF8UL
static const unsigned long mask01 = 0x0101010101010101;
static const unsigned long mask80 = 0x8080808080808080;

size_t  ft_strlen(const char *str)
{
	const char          *ptr;
	const unsigned long *ul_ptr;
	unsigned long       va;
	unsigned long       vb;

	ul_ptr = (const unsigned long *)((unsigned long)str & OVER_HEIGHT);
	va = (*ul_ptr - mask01);
	vb = ((~*ul_ptr) & mask80);
	++ul_ptr;
	if (va & vb)
		for (ptr = str; ptr < (const char *)ul_ptr; ptr++)
			if (*ptr == '\0')
				return (ptr - str);

	while (1)
	{
		va = (*ul_ptr - mask01);
		vb = ((~*ul_ptr) & mask80);
		if (va & vb)
		{
			ptr = (const char *)ul_ptr;
			if (ptr[0] == '\0')
				return (ptr - str);
			if (ptr[1] == '\0')
				return (ptr - str + 1);
			if (ptr[2] == '\0')
				return (ptr - str + 2);
			if (ptr[3] == '\0')
				return (ptr - str + 3);
			if (ptr[4] == '\0')
				return (ptr - str + 4);
			if (ptr[5] == '\0')
				return (ptr - str + 5);
			if (ptr[6] == '\0')
				return (ptr - str + 6);
			if (ptr[7] == '\0')
				return (ptr - str + 7);
		}
		++ul_ptr;
	}
	return (0);
}
