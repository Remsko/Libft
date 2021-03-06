/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 14:33:50 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/15 14:39:01 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arrdel(void **arr)
{
	char	**tmp;
	int		i;

   	tmp = (char **)arr;
	i = 0;
	while (tmp[i] != NULL)
		free(tmp[i++]);
	free(tmp);
}
