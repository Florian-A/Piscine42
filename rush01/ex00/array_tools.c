/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m█████ <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:58:59 by m█████            #+#    #+#             */
/*   Updated: 2021/08/15 20:09:27 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

int	**cr_tow_dim_array(int nb_row, int nb_col)
{
	int	i;
	int	j;
	int	**array;

	i = 0;
	array = (int **) malloc((nb_row + 1) * sizeof(int));
	while (i < nb_row + 1)
	{
		array[i] = (int *)malloc((nb_col) * sizeof(int));
		i++;
	}
	i = 0;
	while (i <= nb_row + 1)
	{
		j = 0;
		while (j <= nb_col)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}

void	del_tow_dim_array(int **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	fill_array_entries(char *view_entries, int **array)
{
	int	i;
	int	j;
	int	view_points[17];

	i = 0;
	j = 0;
	while (i++, view_entries[i - 1])
	{
		if (view_entries[i - 1] >= '1' && view_entries[i - 1] <= '4')
		{
			view_points[j] = view_entries[i - 1] - '0';
			j++;
		}
	}
	fill_array_points(view_points, array);
}

void	fill_array_points(int	*view_points, int	**array)
{
	int	i;

	i = 0;
	while (i++ <= 3)
		array[1][i + 1] = view_points[i - 1];
	i = 0;
	while (i++ <= 3)
		array[6][i + 1] = view_points[i + 3];
	i = 0;
	while (i++ <= 3)
		array[i + 1][1] = view_points[i + 7];
	i = 0;
	while (i++ <= 3)
		array[i + 1][6] = view_points[i + 11];
	i = 0;
}

int	**copy_array(int	**array_src)
{
	int	i;
	int	j;
	int	**array_dest;

	i = 0;
	j = 0;
	while (i++, array_src[0][i - 1])
		while (j++, array_src[j - 1][0])
			;
	array_dest = cr_tow_dim_array(i, j);
	i = 0;
	j = 0;
	while (i++, array_src[i - 1])
	{
		j = 0;
		while (array_src[i - 1][j])
			array_dest[i - 1][j] = array_src[i - 1][j];
	}
	return (array_dest);
}
