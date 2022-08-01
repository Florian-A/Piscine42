/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:09:51 by f██████           #+#    #+#             */
/*   Updated: 2021/08/22 23:19:19 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

void	show_3d_array(char ***pnt);
void	show_2d_array(char **pnt);
char	*ft_strndup(char *src, int n);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *dest, char *src);
char	**ft_split(char *str, char *charset);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	***file_to_array_dict(char *path);
void	*ft_print_memory(void *addr, unsigned int size);
void	put_all_words(char *nb);
char	***g_dict;
char	*ten_multiple(int n);

#endif
