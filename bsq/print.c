/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 23:33:10 by f██████           #+#    #+#             */
/*   Updated: 2021/08/25 12:51:07 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

void	print_map(t_bsq	*bsq, t_point pt_min, t_point pt_max)
{
	t_point	point;

	if (!verif_read(bsq, read(bsq->fd, bsq->map.buff, bsq->map.start_tb - 1)))
		return ;
	point.y = 0;
	while (bsq->fd != 0 && bsq->error == NO_ERROR)
	{
		point.x = 0;
		if (!verif_read(bsq, read(bsq->fd, bsq->map.buff, bsq->map.size + 1)))
			return ;
		while (point.x < bsq->map.size + 1)
		{
			if ((point.y >= pt_min.y && point.y <= pt_max.y)
				&& (point.x >= pt_min.x && point.x <= pt_max.x))
				ft_putchar(bsq->map.square);
			else
				ft_putchar(bsq->map.buff[point.x]);
			point.x++;
		}
		point.y++;
	}
}

int	verif_read(t_bsq *bsq, int read_res)
{
	if (read_res == -1)
	{
		bsq->map.step = END;
		bsq->error = ERROR_READ_FILE;
		return (0);
	}
	if (read_res == 0)
	{
		bsq->map.step = END;
		return (0);
	}
	return (1);
}

void	print_map_stdi(t_bsq *bsq, t_point pt_min, t_point pt_max)
{
	t_point	point;

	point.y = 0;
	while (point.y <= bsq->map.node.y - 1)
	{
		point.x = 0;
		while (point.x < bsq->map.size)
		{
			if ((point.y >= pt_min.y && point.y <= pt_max.y)
				&& (point.x >= pt_min.x && point.x <= pt_max.x))
				ft_putchar(bsq->map.square);
			else if (list_ctn(&bsq->map.arr_obs, point))
				ft_putchar(bsq->map.obs);
			else
				ft_putchar(bsq->map.empty);
			point.x++;
		}
		ft_putchar('\n');
		point.y++;
	}
}

void	print_result(t_bsq	*bsq)
{
	t_point	pt_max;

	pt_max.x = bsq->map.result.point.x + bsq->map.result.size - 1;
	pt_max.y = bsq->map.result.point.y + bsq->map.result.size - 1;
	if (bsq->fd != 0)
		print_map(bsq, bsq->map.result.point, pt_max);
	else
		print_map_stdi(bsq, bsq->map.result.point, pt_max);
}
