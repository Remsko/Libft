/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:55:52 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/16 18:35:24 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((unsigned char)*s1++ == (unsigned char)*s2++ && *s1)
		;
	return (int)((unsigned char )*(--s1) - (unsigned char )*(--s2));
}
