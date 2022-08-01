/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 07:33:58 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 01:54:18 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

int	ft_pross_error(t_bsq *bsq)
{
	if (bsq->error == ERROR_MAP)
		ft_putstr("map error\n");
	else if (bsq->error == ERROR_PARSING)
		ft_putstr("parsing error\n");
	else if (bsq->error == ERROR_READ_FILE)
		ft_putstr("map error\n");
	else if (bsq->error == ERROR_MALLOC)
		ft_putstr("malloc error\n");
	else if (bsq->error == ERROR_RESOLVE)
		ft_putstr("map error\n");
	else if (bsq->error == ERROR_INIT_ARGS)
		ft_putstr("map error\n");
	else if (bsq->error == NO_ERROR)
		return (0);
	return (1);
}
