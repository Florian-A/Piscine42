/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_slip.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:57:57 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 04:15:26 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	ft_algo_slip_resolve(t_bsq *bsq, t_map *m)
{	
	find_next_obs(bsq);
	while (m->step == PROCCES)
	{
		m->node.x = m->offset;
		while (m->node.x < bsq->map.size)
		{
			m->offset_collider_x = check_collision_offset(m);
			if (m->offset_collider_x == 0)
			{
				set_result(m);
				next_y(bsq);
				m->offset++;
				m->node.x++;
			}
			else
			{
				if (m->node.x + m->offset_collider_x >= m->size)
					break ;
				m->node.x += m->offset_collider_x;
			}
		}
		if (!next_y(bsq))
			break ;
	}
}

int	next_y(t_bsq *bsq)
{
	int	offset_y;
	int	i;

	i = 0;
	bsq->map.node.y++;
	offset_y = find_next_obs(bsq);
	if (offset_y == -1)
	{
		bsq->map.step = END;
		return (0);
	}
	if (bsq->fd != 0)
		free_list_y(&bsq->map.arr_obs, bsq->map.node.y - (bsq->map.offset + 1));
	return (1);
}

int	check_collision_offset(t_map *m)
{
	t_list_x	*tmp;
	t_point		offset;

	offset.x = 0;
	while (offset.x < (m->offset + 1))
	{
		offset.y = 0;
		while (offset.y < (m->offset + 1))
		{
			tmp = list_ctn(&m->arr_obs, point_min(m->node, offset));
			if (tmp)
				return (m->offset + 1 - offset.x);
			offset.y++;
		}
		offset.x++;
	}
	return (0);
}
