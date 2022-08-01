/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 23:33:10 by f██████           #+#    #+#             */
/*   Updated: 2021/08/25 03:30:24 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

int	file_open(t_bsq *bsq, char *path)
{
	bsq->fd = open(path, O_RDONLY);
	bsq->path = path;
	if (bsq->fd == -1)
		bsq->error = ERROR_READ_FILE;
	return (bsq->fd != -1);
}

int	file_open_std(t_bsq *bsq)
{
	bsq->fd = STDIN_FILENO;
	bsq->path = NULL;
	if (bsq->fd == -1)
		bsq->error = ERROR_READ_FILE;
	return (bsq->fd != -1);
}

int	file_close(t_bsq *bsq)
{
	int	res;

	res = close(bsq->fd);
	if (res == -1)
		bsq->error = ERROR_READ_FILE;
	return (res != -1);
}
