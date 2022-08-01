/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:06:24 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 04:53:38 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

void	bsq_init_var(t_bsq *bsq)
{
	bsq->error = NO_ERROR;
	bsq->map.empty = 0;
	bsq->map.offset = 0;
	bsq->map.obs = 0;
	bsq->map.square = 0;
	bsq->map.size = 0;
	bsq->map.start_tb = 1;
	bsq->map.step = INIT;
	bsq->map.node.x = 0;
	bsq->map.node.y = 0;
	bsq->map.arr_obs.y = NULL;
	bsq->map.arr_obs.last_y = NULL;
	bsq->map.offset_collider_x = 0;
}

void	bsq_init_buffer(t_bsq *bsq)
{
	bsq->map.buff = malloc(sizeof(char) * (bsq->map.size + 1));
	if (!bsq->map.buff)
	{
		bsq->map.step = END;
		bsq->error = ERROR_MALLOC;
	}
}

t_bsq	*bsq_init(void)
{
	t_bsq	*bsq;

	bsq = malloc(sizeof(t_bsq));
	if (!bsq)
		return (NULL);
	return (bsq);
}
