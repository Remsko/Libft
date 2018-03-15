/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 09:46:33 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/16 16:22:21 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		tmp;

	len = (n <= 0);
	tmp = n;
	while (++len && tmp)
		tmp /= 10;
	if (!(str = (char*)malloc(sizeof(*str) * (len))))
		return (NULL);
	str[--len] = '\0';
	tmp = (n < 0) ? -1 : 1;
	while (len)
	{
		str[--len] = (n % 10) * tmp + '0';
		n /= 10;
	}
	tmp < 0 ? *str = '-' : 0;
	return (str);
}
