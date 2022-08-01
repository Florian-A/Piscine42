/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g██████ <g██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 07:31:55 by g██████           #+#    #+#             */
/*   Updated: 2021/08/25 13:20:20 by g██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "enum.h"
# include "list.h"
# include "struct.h"

//main.c
void			run_file_resolver(t_bsq *bsq, char *arg);
void			run_file_resolver_stdi(t_bsq *bsq);

//ft_bsq.c
t_bsq			*bsq_init(void);
void			bsq_init_buffer(t_bsq *bsq);
void			bsq_init_var(t_bsq *bsq);

//ft_error.c
int				ft_pross_error(t_bsq *bsq);
char			*ft_strndup(char *src, int n);

//algo_slip_init.c
int				read_verif(t_bsq *bsq, int read_res);
void			ft_algo_slip_init(t_bsq *bsq);
void			init_args(t_bsq *bsq, char *buff, int len);
void			init_args_verif(t_bsq *bsq, char *buff);

//algo_slip_init_check_args.c
void			init_args_size(t_bsq *bsq, char *buff);
void			init_args_empty(t_bsq *bsq, char *buff);
void			init_args_obs(t_bsq *bsq, char *buff);
void			init_args_square(t_bsq *bsq, char *buff);

//algo_slip_utils.c
int				find_obs(t_bsq *bsq, unsigned int x, unsigned int y);
t_point			init_point(void);
unsigned int	find_index(t_bsq *bsq, t_point point);
t_result		init_result(void);
void			set_result(t_map *m);
int				find_next_obs(t_bsq *bsq);
void			add_obs(t_bsq *bsq, t_list_y *tmp_y, t_list_x *tmp_x, int x);

//point.c
t_point			point_min(t_point dest, t_point min);
t_point			point_add(t_point dest, t_point add);

//algo_slip.c
void			ft_algo_slip_resolve(t_bsq *bsq, t_map *m);
int				check_collision_offset(t_map *m);
int				next_y(t_bsq *bsq);

//list
void			ft_list_init(t_list *list);
void			ft_list_add(t_list *list, unsigned int x, unsigned int y);
t_list_x		*list_ctn(t_list *list, t_point point);
t_list_y		*ft_find_or_add_y(t_list *list, unsigned int y);

//list_push.c
t_list_y		*list_push_y(t_list *list, unsigned int y);
t_list_x		*list_push_x(t_list_y *list, unsigned int x);

//list_utils.c
void			ft_list_print(t_list *list);

//free.c
void			free_all(t_bsq *bsq);
void			free_verif(void *ptr);
void			free_map(t_map *map);

//free_list.c
void			free_list_all(t_list *list);
void			free_list_y(t_list *list, unsigned int y);
void			free_list_yx(t_list_y *list);
void			free_list_x(t_list_x *list);
void			file_reset_fd(t_bsq *bsq);

//file_manager.c
int				file_open(t_bsq *bsq, char *path);
int				file_open_std(t_bsq *bsq);
int				file_close(t_bsq *bsq);

//result.c
void			print_result(t_bsq *bsq);
int				verif_read(t_bsq *bsq, int read_res);
void			print_map(t_bsq	*bsq, t_point pt_min, t_point pt_max);

//lib
int				ft_atoi(char *str);
char			**ft_split(char *str, char *charset);
char			*ft_strndup(char *src, int n);
int				ft_strlen(char *str);
void			ft_putchar(char c);
char			*file_to_array(char *path);
void			ft_putstr(char *str);
void			print_raw_imput(int *ar);
char			*delnlines(char *str, int n);
int				ft_str_is_numeric(char *str);
int				ft_str_is_printable(char *str);
int				ft_char_is_numeric(char *str);
int				ft_char_is_printable(char *str);

#endif