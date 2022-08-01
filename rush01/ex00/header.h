/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:24:25 by f██████           #+#    #+#             */
/*   Updated: 2021/08/15 20:12:48 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);
int		is_match(int vnb, int *ar);
void	print_result(int **arr);
void	print_debug(int **arr);
int		**cr_tow_dim_array(int nb_row, int nb_col);
void	del_tow_dim_array(int **array);
void	fill_array_entries(char *view_entries, int **array);
void	fill_array_points(int	*view_points, int	**array);
int		**copy_array(int	**array_src);
int		ft_error_strlen(char	*str);
int		ft_error_char(char	*str);
#endif
