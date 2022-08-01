/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/26 20:01:20 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*nbrs;

	nbrs = malloc(sizeof(int) * (length));
	if (!nbrs)
		return (NULL);
	i = 0;
	while (i < length)
	{
		nbrs[i] = (*f)(tab[i]);
		i++;
	}
	return (nbrs);
}
