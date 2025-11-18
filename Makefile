# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/16 16:30:40 by ilsyabri          #+#    #+#              #
#    Updated: 2025/11/18 12:40:22 by ilsyabri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_putchar.c ft_putnbr.c ft_printf.c ft_count_signed_base.c ft_count_unsigned_base.c \
	ft_putstr.c

OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
CFLAG = -Wall -Wextra -Werror

all : $(NAME) 

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	cc $(CFLAG) -c $< -o $@
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all re fclean clean
