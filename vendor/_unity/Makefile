# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/31 07:27:12 by cacharle          #+#    #+#              #
#    Updated: 2020/01/31 08:39:24 by cacharle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CCFLAGS = -Iinclude -Wall -Wextra -Werror

NAME = libunity.a

INCLUDE = $(shell find include -type f -name "*.h")
SRC = $(shell find src -type f -name "*.c")
OBJ = $(SRC:.c=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ)
	@echo "Unity: Linking: $@"
	@ar rcs $@ $^

%.o: %.c $(INCLUDE)
	@echo "Unity: Compiling: $@"
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@echo "Unity: Removing objects"
	@rm -f $(OBJ)

fclean: clean
	@echo "Unity: Removing: $(NAME)"
	@rm -f $(NAME)

re: fclean all
