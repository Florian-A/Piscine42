/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/19 11:24:30 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pnt;
	int	pnt_len;
	int	i;

	if (min >= max)
		return (NULL);
	pnt_len = max - min;
	if (pnt_len < 1)
		pnt = NULL;
	else
	{
		pnt = malloc((pnt_len) * sizeof(int));
		if (!pnt)
			return (NULL);
		i = 0;
		while (i < pnt_len)
		{
			pnt[i] = (min + i);
			i++;
		}
	}
	return (pnt);
}
