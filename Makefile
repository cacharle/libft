# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 15:45:53 by cacharle          #+#    #+#              #
#    Updated: 2020/01/17 10:51:24 by cacharle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
MAKE_ARGS = --no-print-directory

CC = gcc
CCFLAGS = -I$(INCLUDE_DIR) -Wall -Wextra -Werror

SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
SCRIPT_DIR = script

IGNORE_FILE = .libftignore
IGNORE_DEFAULT = ft_printf

NAME = libft.a

SRC = $(shell sh $(SCRIPT_DIR)/find_src.sh $(IGNORE_FILE))
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

HEADER = $(shell find $(INCLUDE_DIR) -name "*.h")

all: prebuild $(NAME)

prebuild:
	@for dir in $$(find $(SRC_DIR)/* $(FIND_ARGS) -type d | \
				   sed 's_$(SRC_DIR)/_$(OBJ_DIR)/_g'); \
	do \
		if [ ! -d "$$dir" ]; then \
			mkdir -p $$dir; echo "Making build dir: $$dir"; fi \
	done

$(NAME): $(OBJ) $(HEADER)
	@echo "Linking: $@"
	@$(LIB) $@ $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling: $@"
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@echo "Removing objects"
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@echo "Removing library"
	@$(RM) $(NAME)

re: fclean all
