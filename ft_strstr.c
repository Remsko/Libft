/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:53:45 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/16 18:34:50 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char const *h;
	char const *n;

	if (*needle == '\0')
		return (char *)(haystack);
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			h = haystack;
			n = needle;
			while (*n++ == *h++ && *n)
				;
			if (*n == '\0')
				return (char *)(haystack);
		}
		++haystack;
	}
	return (NULL);
}
