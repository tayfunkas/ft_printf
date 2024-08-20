# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkasapog <tkasapog@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 15:16:24 by tkasapog          #+#    #+#              #
#    Updated: 2024/05/03 15:23:18 by tkasapog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printchar.c \
	ft_printhex.c \
	ft_printnbr.c \
	ft_printptr.c \
	ft_printstr.c \
	ft_printunbr.c \
	ft_strlen.c \
	ft_strchr.c \
	ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -r $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
