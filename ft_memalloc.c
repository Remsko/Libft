/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:26:08 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/09 10:43:34 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *dst;

	dst = malloc(size);
	if (dst == NULL)
		return (NULL);
	ft_memset(dst, 0, size);
	return (dst);
}

int		main(void)
{
	return (0);
}
