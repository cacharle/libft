MAKE_ARGS = --no-print-directory

NAME = test_libft

BUILD_DIR = build
LIBFT_DIR = ..
CTEST_DIR = ctest

CC = gcc
CCFLAGS = -Wall -Wextra -I$(LIBFT_DIR)/include -I$(CTEST_DIR)
LDFLAGS = -L$(LIBFT_DIR) -lft

HEADER = $(shell find . -name "*.h")
SRC = $(shell find . -name "*_test.c")
SRC += $(shell find $(CTEST_DIR) -name "*.c")
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)

all: make_build_dirs $(NAME)

run_raw: all
	@./$(NAME)

make_build_dirs:
	@for dir in $$(find . -not -path "*build*" -type d | sed 's/.*/$(BUILD_DIR)\/&/'); \
	do \
		if [ ! -d "$$dir" ]; then \
			mkdir -p $$dir; echo "Making build dir: $$dir"; fi \
	done

$(NAME): $(OBJ) libft_all
	@echo "Test: Linking $@"
	@$(CC) -o $@ $(OBJ) $(LDFLAGS)

$(BUILD_DIR)/%.o: %.c $(HEADER)
	@echo "Test: Compiling: $@"
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@echo "Test: Removing objects"
	@$(RM) -r $(BUILD_DIR)

fclean: clean
	@echo "Test: Removing library"
	@$(RM) $(NAME)
	@echo "Test: Removing libft"
	@$(MAKE) $(MAKE_ARGS) -C $(LIBFT_DIR) fclean

re: fclean all

libft_all:
	@echo "Test: Making libft"
	@$(MAKE) $(MAKE_ARGS) -C $(LIBFT_DIR) all
