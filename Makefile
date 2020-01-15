# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 15:45:53 by cacharle          #+#    #+#              #
#    Updated: 2020/01/15 09:54:56 by cacharle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -I$(INCLUDE_DIR) -Wall -Wextra -Werror

NAME = libft.a

# AVAILABLE_FEATURES = get_next_line ft_printf ft_lst
CONF_FILE = libft.conf

ifeq ($(wildcard $(CONF_FILE)),)
$(warning "No configuration file found with name $(CONF_FILE), using default")
	SRC_DIR = src
	BUILD_DIR = build
	INCLUDE_DIR = include
	FEATURES = get_next_line
else
	SRC_DIR = $(shell sed -n 's/SRC_DIR=//p' $(CONF_FILE))
	BUILD_DIR = $(shell sed -n 's/BUILD_DIR=//p' $(CONF_FILE))
	INCLUDE_DIR = $(shell sed -n 's/INCLUDE_DIR=//p' $(CONF_FILE))
	FEATURES = $(shell sed -n 's/FEATURES=//p' $(CONF_FILE))
endif

ifeq ($(findstring get_next_line,$(FEATURES)),)
	FIND_ARGS += -not -path "*get_next_line*"
endif
ifeq ($(findstring ft_printf,$(FEATURES)),)
	FIND_ARGS += -not -path "*printf*"
endif
ifeq ($(findstring ft_lst,$(FEATURES)),)
	FIND_ARGS += -not -name "ft_lst*"
endif

SRC = $(shell find $(SRC_DIR) $(FIND_ARGS) -name *.c)

OBJ = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

HEADER_FILES = libft.h get_next_line.h
HEADER = $(addprefix $(INCLUDE_DIR)/,$(HEADER_FILES))

all: make_build_dirs $(NAME)

make_build_dirs:
	@for dir in $$(find $(SRC_DIR)/* $(FIND_ARGS) -type d | \
				   sed 's_$(SRC_DIR)/_$(BUILD_DIR)/_g'); \
	do \
		if [ ! -d "$$dir" ]; then \
			mkdir -p $$dir; echo "Making build dir: $$dir"; fi \
	done

$(NAME): $(OBJ) $(HEADER)
	@echo "Linking: $@"
	@$(LIB) $(NAME) $(OBJ)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling: $@"
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@echo "Removing objects"
	@$(RM) -r $(BUILD_DIR)


fclean: clean
	@echo "Removing library"
	@$(RM) $(NAME)

re: fclean all
