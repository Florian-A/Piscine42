/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:56:18 by g██████           #+#    #+#             */
/*   Updated: 2021/08/24 22:39:49 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

t_list_y	*list_push_y(t_list *list, unsigned int y)
{
	t_list_y	*new_y;

	new_y = malloc(sizeof(t_list_y));
	new_y->y = y;
	new_y->entry_x = NULL;
	new_y->last_x = NULL;
	new_y->next_y = NULL;
	if (!list->last_y)
	{
		list->last_y = new_y;
		list->y = new_y;
	}
	else
	{
		list->last_y->next_y = new_y;
		list->last_y = new_y;
	}
	return (new_y);
}

t_list_x	*list_push_x(t_list_y *list, unsigned int x)
{
	t_list_x	*new_x;

	new_x = malloc(sizeof(t_list_x));
	new_x->x = x;
	new_x->next = NULL;
	if (!list->last_x)
	{
		list->last_x = new_x;
		list->entry_x = new_x;
	}
	else
	{
		list->last_x->next = new_x;
		list->last_x = new_x;
	}
	return (new_x);
}
