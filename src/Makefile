# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 15:18:56 by tanselmo          #+#    #+#              #
#    Updated: 2023/12/28 17:47:18 by tanselmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CFILES = ft_printf.c \
ft_putchar.c \
ft_putstr.c \
ft_putnbr.c \
ft_putnbr_u.c \
ft_hexa.c \
ft_hexaup.c \
ft_hexapointer.c \

OFILES = $(CFILES:.c=.o)

NAME = libftprintf.a

#rules
all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)