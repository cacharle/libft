# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 15:45:53 by cacharle          #+#    #+#              #
#    Updated: 2020/02/13 04:31:23 by cacharle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
NORM = norminette
MAKE = make
MAKE_ARGS = --no-print-directory

SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
SCRIPT_DIR = script
TEST_DIR = test

INCLUDE_DIR = include

OPTIMIZATION ?= -O0

CC = gcc
CCFLAGS = -I$(INCLUDE_DIR) $(OPTIMIZATION) -Wall -Wextra -Werror

IGNORE_FILE = .libftignore
IGNORE_DEFAULT = ft_printf

NAME = libft.a

SRC = $(shell sh $(SCRIPT_DIR)/find_src.sh $(IGNORE_FILE))
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

INCLUDE = $(shell find $(INCLUDE_DIR) -name "*.h")

# export LIBFT_SRC = $(SRC)

all: prebuild $(NAME)

.PHONY: test
test: all
	@echo "Testing"
	@$(MAKE) $(MAKE_ARGS) -C $(TEST_DIR) run

norm:
	@if [ `command -v $(NORM)` ];        \
	then echo "Running norminette";      \
			  $(NORM) $(SRC) $(INCLUDE); \
	else echo "$(NORM) not installed"; fi

prebuild:
	@for dir in $$(find $(SRC_DIR)/* $(FIND_ARGS) -type d |    \
				   sed 's_$(SRC_DIR)/_$(OBJ_DIR)/_g');         \
	do                                                         \
		if [ ! -d "$$dir" ]; then                              \
			mkdir -p $$dir; echo "Making build dir: $$dir"; fi \
	done

$(NAME): $(OBJ) $(INCLUDE)
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

so: all
	gcc -o libft.so -shared -fPIC $(OBJ)
