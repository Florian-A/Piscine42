/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:30:21 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 04:15:48 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

void	ft_list_init(t_list *list)
{
	list->y = NULL;
}

t_list_x	*list_ctn(t_list *list, t_point point)
{
	t_list_y	*tmp_y;
	t_list_x	*tmp_x;

	tmp_y = list->y;
	while (tmp_y && tmp_y->y < point.y)
		tmp_y = tmp_y->next_y;
	if (!tmp_y || tmp_y->y != point.y)
		return (NULL);
	tmp_x = tmp_y->entry_x;
	while (tmp_x && tmp_x->x < point.x)
		tmp_x = tmp_x->next;
	if (!tmp_x || tmp_x->x != point.x)
		return (NULL);
	return (tmp_x);
}
