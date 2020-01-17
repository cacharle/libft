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

NAME = libft.a
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build
TEST_DIR = test

# AVAILABLE_FEATURES = get_next_line ft_printf ft_lst
CONF_FILE = libft.conf

ifndef (FEATURES)
endif
ifeq ($(wildcard $(CONF_FILE)),)
$(warning "No configuration file found with name $(CONF_FILE), using default")
	FEATURES = get_next_line
	CCFLAGS += -D FT_FEATURES_FT_GET_NEXT_LINE
else
	FEATURES = $(shell sed -n 's/FEATURES=//p' $(CONF_FILE))
endif

ifeq ($(findstring get_next_line,$(FEATURES)),)
	FIND_ARGS += -not -name "ft_get_next_line.c"
else
	CCFLAGS += -D FT_FEATURES_FT_GET_NEXT_LINE
endif
ifeq ($(findstring ft_printf,$(FEATURES)),)
	FIND_ARGS += -not -path "*printf*"
else
	CCFLAGS += -D FT_FEATURES_FT_PRINTF
endif
ifeq ($(findstring ft_lst,$(FEATURES)),)
	FIND_ARGS += -not -name "ft_lst*.c"
else
	CCFLAGS += -D FT_FEATURES_FT_LST
endif

SRC = $(shell find $(SRC_DIR) $(FIND_ARGS) -name "*.c")
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

HEADER = $(shell find $(INCLUDE_DIR) -name "*.h")

all: make_build_dirs $(NAME)

.PHONY: test
test:
	@$(MAKE) $(MAKE_ARGS) -C $(TEST_DIR) run_raw

make_build_dirs:
	@for dir in $$(find $(SRC_DIR)/* $(FIND_ARGS) -type d | \
				   sed 's_$(SRC_DIR)/_$(BUILD_DIR)/_g'); \
	do \
		if [ ! -d "$$dir" ]; then \
			mkdir -p $$dir; echo "Making build dir: $$dir"; fi \
	done

$(NAME): $(OBJ) $(HEADER)
	@echo "Linking: $@"
	@$(LIB) $@ $(OBJ)

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
