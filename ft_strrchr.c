/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:36:22 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/16 18:34:23 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include	"stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *start;

	start = s;
	while (*s)
		++s;
	while (s >= start && *s != (char)c)
		--s;
	if (*s == (char)c)
		return ((char*)s);
	return (NULL);
}
