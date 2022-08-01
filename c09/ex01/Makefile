OBJS = $(SRC:.c=.o)
SRC	= $(addprefix $(SRC_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
SRC_DIR	= srcs
INC_DIR	= includes
OUT	= libft.a
CC = gcc
AR = ar
FLAGS = -Wall -Wextra -Werror

all: $(OUT)

$(OUT) : $(OBJS)
	$(AR) -rcs $(OUT) $(OBJS)

%.o:%.c
	$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(OUT)

re : fclean all

.PHONY: all clean fclean re