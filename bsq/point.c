/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:16:58 by g██████           #+#    #+#             */
/*   Updated: 2021/08/24 11:53:02 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

t_point	point_min(t_point dest, t_point min)
{
	dest.x -= min.x;
	dest.y -= min.y;
	return (dest);
}

t_point	point_add(t_point dest, t_point add)
{
	dest.x += add.x;
	dest.y += add.y;
	return (dest);
}
