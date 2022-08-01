/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_slip_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:57:57 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 04:13:05 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

unsigned int	find_index(t_bsq *bsq, t_point point)
{
	unsigned int	posi;

	posi = bsq->map.start_tb;
	posi += point.x;
	posi += (bsq->map.size * point.y) + (point.y * 1);
	return (posi);
}

t_result	init_result(void)
{
	t_result	result;

	result.point.x = 0;
	result.point.y = 0;
	result.size = 0;
	return (result);
}

void	set_result(t_map *m)
{
	m->result.point.x = m->node.x - m->offset;
	m->result.point.y = m->node.y - m->offset;
	m->result.size = m->offset + 1;
}

int	find_next_obs(t_bsq *bsq)
{
	unsigned int	x;
	t_list_y		*tmp_y;
	t_list_x		*tmp_x;

	x = 0;
	tmp_y = list_push_y(&bsq->map.arr_obs, bsq->map.node.y);
	tmp_x = NULL;
	bsq->map.offset_collider_x = 0;
	if (!read_verif(bsq, read(bsq->fd, bsq->map.buff, bsq->map.size + 1)))
		return (-1);
	while (x < bsq->map.size)
	{
		if (bsq->map.buff[x] == bsq->map.obs)
			tmp_x = list_push_x(tmp_y, x);
		else if (bsq->map.buff[x] != bsq->map.empty)
		{
			bsq->error = ERROR_MAP;
			break ;
		}
		x++;
	}
	return (0);
}

void	add_obs(t_bsq *bsq, t_list_y *tmp_y, t_list_x *tmp_x, int x)
{
	if (!tmp_y)
		tmp_y = list_push_y(&bsq->map.arr_obs, bsq->map.node.y);
	tmp_x = list_push_x(tmp_y, x);
}
