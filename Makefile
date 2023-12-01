# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 12:42:42 by leobarbo          #+#    #+#              #
#    Updated: 2023/12/01 13:44:57 by leobarbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

PATH_INCLUDE = ./includes/

PATH_UTILS = ./utils/

PATH_SRC = ./src/

CFLAGS = -Wall -Werror -Wextra -g3

AR := ar -rcs

RM := rm -rf

SRCS = ft_printf.c

UTILS = ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putnbr_unsg.c \
		ft_putpointer.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_utoa.c \
		ft_itoa.c \
		ft_calloc.c \
		ft_memset.c

OBJS := $(SRCS:.c=.o)
OBJS_UTILS := $(UTILS:.c=.o)

.DEFAULT_GOAL := all

.PHONY: all clean fclean re

$(NAME): $(OBJS) $(OBJS_UTILS)
	$(AR) $@ $^

all: $(NAME)

%.o:$(PATH_SRC)%.c
	@echo "Compilando $<"
	$(CC) $(CFLAGS) -I $(PATH_SRC) -c $< -o $@

%.o: $(PATH_UTILS)%.c
	@echo "Compilando $<"
	$(CC) $(CFLAGS) -I $(PATH_SRC) -I $(PATH_UTILS) -c $< -o $@

clean: 
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all



