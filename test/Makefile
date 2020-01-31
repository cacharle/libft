MAKE = make
MAKE_ARGS = --no-print-directory

UNITY_DIR = ../vendor/_unity
LIBFT_DIR = ..

SRC_DIR = src
INCLUDE_DIR = include

CC = gcc
CCFLAGS = -I$(INCLUDE_DIR) -I$(UNITY_DIR)/include -I$(LIBFT_DIR)/include -Wall -Wextra -Werror
LDFLAGS = -L$(UNITY_DIR) -lunity -L$(LIBFT_DIR) -lft

NAME = libft_test

SRC = $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ = $(SRC:.c=.o)


all: unity_all $(NAME)

run: all
	@echo "Test: Running"
	@./$(NAME)

$(NAME): $(OBJ)
	@echo "Test: Linking: $@"
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c 
	@echo "Test: Compiling: $@"
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean: unity_fclean
	@echo "Test: Removing object"
	@$(RM) $(OBJ)

fclean:
	@echo "Test: Removing executable"
	@$(RM) $(NAME)

re: fclean all

unity_all:
	@$(MAKE) $(MAKE_ARGS) -s -C $(UNITY_DIR) all

unity_fclean:
	@$(MAKE) $(MAKE_ARGS) -s -C $(UNITY_DIR) fclean
