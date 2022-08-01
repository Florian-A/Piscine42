/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_slip_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:57:57 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 13:36:52 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"
#include <stdio.h>

void	ft_algo_slip_init(t_bsq *bsq)
{	
	char		*buff;
	char		*strs;
	int			i;

	i = 0;
	strs = malloc(sizeof(char) * 30);
	buff = malloc(sizeof(char));
	if (!buff || !strs)
		bsq->error = ERROR_MALLOC;
	while (bsq->map.step == INIT && bsq->error == NO_ERROR)
	{
		if (!read_verif(bsq, read(bsq->fd, buff, 1)))
			break ;
		strs[i] = buff[0];
		i++;
		if (buff[0] == '\n' || buff[0] == '\0' || i == 29)
			bsq->map.step = ARGS;
	}
	if (bsq->error == NO_ERROR)
		init_args(bsq, strs, i - 1);
	if (strs)
		free(strs);
	if (buff)
		free(buff);
}

void	init_args(t_bsq *bsq, char *buff, int len)
{
	int	i;

	i = 0;
	if (bsq->map.step == SIZE)
	{
		while (i < len - 3)
		{
			init_args_size(bsq, &buff[i]);
			i++;
		}
	}
	bsq->map.start_tb = len + 2;
	init_args_empty(bsq, &buff[i]);
	init_args_obs(bsq, &buff[i + 1]);
	init_args_square(bsq, &buff[i + 2]);
	init_args_verif(bsq, &buff[i + 3]);
	if (bsq->error == NO_ERROR)
		ft_algo_slip_resolve(bsq, &bsq->map);
}

int	read_verif(t_bsq *bsq, int read_res)
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

void	init_args_verif(t_bsq *bsq, char *buff)
{
	if (buff[0] == '\n')
	{
		bsq_init_buffer(bsq);
		if (bsq->error == NO_ERROR)
			bsq->map.step = PROCCES;
	}
	else
		bsq->error = ERROR_INIT_ARGS;
}
