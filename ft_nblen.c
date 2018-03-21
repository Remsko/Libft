/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 11:05:38 by rpinoit           #+#    #+#             */
/*   Updated: 2018/03/21 11:19:18 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_unblen(uintmax_t n, uintmax_t base)
{
	int len;

	len = 1;
	while (n /= base)
		++len;
	return (len);
}

int		ft_nblen(intmax_t n, intmax_t base)
{
	int len;

	len = 1;
	while (n /= base)
		++len;
	return (len);
}
