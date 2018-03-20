/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:45:23 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/16 18:35:07 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char const	*h;
	char const	*n;
	size_t		l;

	if (*needle == '\0')
		return (char *)(haystack);
	while (*haystack && len--)
	{
		if (*needle == *haystack)
		{
			h = haystack;
			n = needle;
			l = len;
			while (l && *n++ == *h++ && *n)
				--l;
			if (*n == '\0')
				return (char *)(haystack);
		}
		++haystack;
	}
	return (NULL);
}
