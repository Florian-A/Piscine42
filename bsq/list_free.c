/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:36:08 by g██████           #+#    #+#             */
/*   Updated: 2021/08/24 23:17:41 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_header.h"

void	free_list_all(t_list *list)
{
	if (!list)
		return ;
	free_list_yx(list->y);
}

void	free_list_y(t_list *list, unsigned int y)
{
	t_list_y	*tmp;

	if (y < 0)
		return ;
	tmp = list->y;
	while (tmp && tmp->y <= y)
	{
		free_list_x(tmp->entry_x);
		tmp = tmp->next_y;
	}
	list->y = tmp;
}

void	free_list_yx(t_list_y *list)
{
	t_list_y	*tmp;

	if (!list)
		return ;
	tmp = list->next_y;
	free_list_x(list->entry_x);
	free_verif(list);
	free_list_yx(tmp);
}

void	free_list_x(t_list_x *list)
{
	t_list_x	*tmp;

	if (!list)
		return ;
	tmp = list->next;
	free_verif(list);
	free_list_x(tmp);
}
