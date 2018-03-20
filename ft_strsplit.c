/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:35:36 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/16 15:24:06 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	len;
	char	**tab;

	if (!s || !(tab = (char**)malloc(sizeof(*tab) * \
					(ft_count_words(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			++s;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				++len;
			*tab++ = ft_strndup(s, len);
			s += len;
		}
	}
	*tab = NULL;
	return (tab);
}
