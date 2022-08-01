/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_slip_init_check_args.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:57:57 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 13:16:44 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	init_args_size(t_bsq *bsq, char *buff)
{
	if (ft_char_is_numeric(buff))
		bsq->map.size = (bsq->map.size * 10) + (buff[0] - '0');
}

void	init_args_empty(t_bsq *bsq, char *buff)
{
	if (ft_char_is_printable(buff))
	{
		bsq->map.empty = buff[0];
		return ;
	}
	bsq->error = ERROR_INIT_ARGS;
}

void	init_args_obs(t_bsq *bsq, char *buff)
{
	if (buff[0] != bsq->map.empty)
	{
		if (ft_char_is_printable(buff))
		{
			bsq->map.obs = buff[0];
			return ;
		}
	}
}

void	init_args_square(t_bsq *bsq, char *buff)
{
	if (buff[0] != bsq->map.empty && buff[0] != bsq->map.obs)
	{
		if (ft_char_is_printable(buff))
		{
			bsq->map.square = buff[0];
			return ;
		}
	}
}
