/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:16:06 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/09 16:08:51 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	count;
	size_t	i;
	size_t	j;
	char	*dst;

	count = 0;
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
	{
		i++;
		count++;
	}
	if (!(dst = (char*)malloc(sizeof(*dst) * (count + 1))))
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		dst[j++] = s[i++];
	dst[i] = '\0';
	return (dst);
}

int		main(void)
{
	printf("%s", ft_strtrim("    bryantou  "));
	return (0);
}
