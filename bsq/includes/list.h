/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:36:35 by g██████           #+#    #+#             */
/*   Updated: 2021/08/24 22:38:44 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list_x
{
	unsigned int	x;
	struct s_list_x	*next;
}				t_list_x;
typedef struct s_list_y
{
	unsigned int	y;
	struct s_list_x	*entry_x;
	struct s_list_x	*last_x;
	struct s_list_y	*next_y;
}				t_list_y;
typedef struct s_list
{
	t_list_y		*y;
	t_list_y		*last_y;
}				t_list;
#endif