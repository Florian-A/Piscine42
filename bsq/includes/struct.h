/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:26:58 by g██████           #+#    #+#             */
/*   Updated: 2021/08/24 21:53:36 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_point
{
	unsigned int	x;
	unsigned int	y;
}				t_point;

typedef struct s_result
{
	t_point			point;
	unsigned int	size;
}				t_result;

typedef struct s_map
{
	unsigned int	start_tb;
	unsigned int	size;
	unsigned int	offset;
	unsigned int	offset_collider_x;
	unsigned int	offset_collider_y;
	char			empty;
	char			square;
	char			obs;
	t_result		result;
	t_step			step;
	t_point			node;
	t_list			arr_obs;
	char			*buff;
}				t_map;

typedef struct s_bsq
{
	t_error			error;
	t_map			map;
	int				fd;
	char			*path;
}				t_bsq;

#endif