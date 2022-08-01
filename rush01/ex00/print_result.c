/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:16:01 by f██████           #+#    #+#             */
/*   Updated: 2021/08/15 17:57:18 by a███████         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_result(int **arr)
{
	int	i;
	int	j;

	i = 0;
	while (i++ <= 3)
	{
		j = 1;
		while (j++ <= 4)
		{
			ft_putchar(arr[i][j - 1] + '0');
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	print_debug(int **arr)
{
	int	i;
	int	j;

	i = 0;
	while (i++ <= 5)
	{
		j = 0;
		while (j++ <= 5)
		{
			ft_putchar(arr[i][j] + '0');
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
