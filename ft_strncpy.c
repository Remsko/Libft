/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:03:28 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/15 14:01:22 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t size;
   
	size = ft_strnlen(src, n);
	if (size != n)
		ft_memset (dest + size, '\0', n - size);
	return (ft_memcpy(dest, src, size));
}
