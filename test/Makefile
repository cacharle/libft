# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 04:35:44 by cacharle          #+#    #+#              #
#    Updated: 2020/02/28 12:13:30 by cacharle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKE = make
MAKE_ARGS = --no-print-directory

UNITY_DIR = ../vendor/_unity
LIBFT_DIR = ..

SRC_DIR = src
INCLUDE_DIR = include

CC = gcc
CCFLAGS = -I$(INCLUDE_DIR) -I$(UNITY_DIR)/include -I$(LIBFT_DIR)/include -Wall -Wextra #-Werror
LDFLAGS = -L$(UNITY_DIR) -lunity -L$(LIBFT_DIR) -lft

NAME = libft_test

INCLUDE = $(shell find $(INCLUDE_DIR) -type f -name "*.h")
SRC = $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ = $(SRC:.c=.o)


all: unity_all $(NAME)

run: all
	@echo "Test: Running"
	@./$(NAME)

run_v: all
	@echo "Test: Running"
	@./$(NAME) -v

run_s: all
	@echo "Test: Running"
	@./$(NAME) -s

$(NAME): libft_all $(OBJ)
	@echo "Test: Linking: $@"
	@$(CC) -o $@ $(OBJ) $(LDFLAGS)

%.o: %.c $(INCLUDE) $(LIBFT_SRC)
	@echo "Test: Compiling: $@"
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean: 
	@echo "Test: Removing object"
	@$(RM) $(OBJ)

clean_dep: unity_fclean libft_fclean

fclean: clean
	@echo "Test: Removing executable"
	@$(RM) $(NAME)

re: fclean all

re_dep: clean_dep fclean all
	
unity_all:
	@$(MAKE) $(MAKE_ARGS) -s -C $(UNITY_DIR) all

unity_fclean:
	@$(MAKE) $(MAKE_ARGS) -s -C $(UNITY_DIR) fclean

libft_all:
	@$(MAKE) $(MAKE_ARGS) -s -C $(LIBFT_DIR) all

libft_fclean:
	@$(MAKE) $(MAKE_ARGS) -s -C $(LIBFT_DIR) fclean
