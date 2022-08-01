# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 12:11:20 by m█████            #+#    #+#              #
#    Updated: 2021/08/25 13:38:04 by f██████          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC =	srcs/ft_atoi.c \
		srcs/ft_char_is_numeric.c \
		srcs/ft_char_is_printable.c \
		srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_str_is_numeric.c \
		srcs/ft_str_is_printable.c \
		srcs/ft_strlen.c \
		srcs/ft_strndup.c \
		algo/algo_slip_init_check_args.c \
		algo/algo_slip_init.c \
		algo/algo_slip_utils.c \
		algo/algo_slip.c \
		bsq.c \
		error.c \
		file_manager.c \
		free.c \
		list_free.c \
		list_push.c \
		list.c \
		main.c \
		point.c \
		print.c

OBJ =	*.o

FLAG = -O3 -Wall -Werror -Wextra

all: $(NAME)

$(NAME) :
	@cc $(FLAG) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean
