/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/19 17:09:33 by f██████          ###   ########lyon.fr   */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	pnt_len;

	pnt_len = max - min;
	if (pnt_len < 1)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = ft_range(min, max);
		if (!range)
		{
			return (-1);
		}
	}
	return (pnt_len);
}
