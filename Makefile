# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 15:45:53 by cacharle          #+#    #+#              #
#    Updated: 2020/10/11 14:51:18 by cacharle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
NORM = norminette
MAKE = make
MAKE_ARGS = --no-print-directory
DOXYGEN = doxygen
DOXYGEN_FILE = Doxyfile

SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
SCRIPT_DIR = script
TEST_DIR = test
DOC_DIR = doc

INCLUDE_DIR = include


CC = gcc
OFLAG ?= -g -O1
CCFLAGS = $(OFLAG) -I$(INCLUDE_DIR) -Wall -Wextra -Werror
ifeq ($(TRAVIS_COMPILER),gcc)
CCFLAGS += -Wno-unused-result
endif

IGNORE_FILE = .libftignore
IGNORE_DEFAULT = ft_printf

NAME = libft.a

SRC = $(shell find $(SRC_DIR) -type f -name '*.c')
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

INCLUDE = $(shell find $(INCLUDE_DIR) -name "*.h")

all: prebuild
	@$(MAKE) -j$(JOBS) allnopre

allnopre: $(NAME)

.PHONY: test
test: all
	@echo "Testing"
	@$(MAKE) -C $(TEST_DIR) run

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

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE)
	@echo "Compiling: $@"
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@echo "Removing objects"
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@echo "Removing $(NAME)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: doc
doc:
	mkdir -p tmp
	for f in $(SRC) $(INCLUDE); do mkdir -p tmp/`dirname $$f` && sed 's_^/\*$$_/**_' $$f > tmp/$$f; done
	$(DOXYGEN) $(DOXYGEN_FILE)

doc_clean:
	$(RM) -r $(DOC_DIR)

