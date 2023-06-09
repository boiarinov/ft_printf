# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 13:57:18 by aboiarin          #+#    #+#              #
#    Updated: 2023/06/08 15:15:37 by aboiarin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -c -Wall -Werror -Wextra

LIB = ar rcs

RM = rm -f

SRC = ft_printf.c ft_print_char.c ft_print_hex.c ft_print_int.c \
ft_print_ptr.c ft_print_str.c ft_print_uint.c ft_calloc.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean:	clean
	$(RM) $(NAME) $(OBJ) $(BONUS_OBJ)

re: fclean all

.PHONY:	all clean fclean re
