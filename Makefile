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

SRC_DIR = src
OBJ_DIR = build
INCLUDE_DIR = include
GET_NEXT_LINE_DIR = get_next_line

CC = gcc
CCFLAGS = -I$(INCLUDE_DIR) -Wall -Wextra -Werror

NAME = libft.a

# SRC_CTYPE_DIR = ctype
# SRC_CTYPE = ft_isalnum.c \
# 			ft_isalpha.c \
# 			ft_isascii.c \
# 			ft_isdigit.c \
# 			ft_isprint.c \
# 			ft_tolower.c \
# 			ft_toupper.c
#
# SRC_IO_DIR = io
# SRC_IO = ft_asprintf.c \
# 		 ft_dprintf.c \
# 		 ft_printf \
# 		 ft_printf.c \
# 		 ft_putchar.c \
# 		 ft_putchar_fd.c \
# 		 ft_putendl.c \
# 		 ft_putendl_fd.c \
# 		 ft_putnbr.c \
# 		 ft_putnbr_fd.c \
# 		 ft_putstr.c \
# 		 ft_putstr_fd.c \
# 		 ft_snprintf.c \
# 		 ft_sprintf.c \
# 		 ft_vasprintf.c \
# 		 ft_vdprintf.c \
# 		 ft_vprintf.c \
# 		 ft_vsnprintf.c \
# 		 ft_vsprintf.c \
# 		 get_next_line
#
# SRC_LST_DIR = lst
# SRC_LST = ft_lstadd_back.c \
# 		  ft_lstadd_front.c \
# 		  ft_lstclear.c \
# 		  ft_lstdelone.c \
# 		  ft_lstiter.c \
# 		  ft_lstlast.c \
# 		  ft_lstmap.c \
# 		  ft_lstnew.c \
# 		  ft_lstpop_front.c \
# 		  ft_lstsize.c
#
# SRC_MEM_DIR = mem
# SRC_MEM = ft_bzero.c \
# 		  ft_calloc.c \
# 		  ft_memalloc.c \
# 		  ft_memccpy.c \
# 		  ft_memchr.c \
# 		  ft_memcmp.c \
# 		  ft_memcpy.c \
# 		  ft_memdel.c \
# 		  ft_memmove.c \
# 		  ft_memset.c
#
# SRC_STR_DIR = str
# SRC_STR = ft_atoi.c \
# 		  ft_itoa.c \
# 		  ft_split.c \
# 		  ft_strcat.c \
# 		  ft_strchr.c \
# 		  ft_strclr.c \
# 		  ft_strcmp.c \
# 		  ft_strcount.c \
# 		  ft_strcpy.c \
# 		  ft_strdel.c \
# 		  ft_strdup.c \
# 		  ft_strequ.c \
# 		  ft_striter.c \
# 		  ft_striteri.c \
# 		  ft_strjoin.c \
# 		  ft_strjoin_free.c \
# 		  ft_strjoin_free_snd.c \
# 		  ft_strlcat.c \
# 		  ft_strlcpy.c \
# 		  ft_strlen.c \
# 		  ft_strmap.c \
# 		  ft_strmapi.c \
# 		  ft_strncat.c \
# 		  ft_strncmp.c \
# 		  ft_strncpy.c \
# 		  ft_strndup.c \
# 		  ft_strnequ.c \
# 		  ft_strnew.c \
# 		  ft_strnstr.c \
# 		  ft_strrchr.c \
# 		  ft_strstr.c \
# 		  ft_strtrim.c \
# 		  ft_substr.c

SRC = $(shell find $(SRC_DIR) -name *.c)

# SRC = $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

HEADER_FILES = libft.h get_next_line.h
HEADER = $(addprefix $(INCLUDE_DIR)/,$(HEADER_FILES))


BONUSOBJ = $(BONUSSRC:.c=.o)

all: make_build_dirs $(NAME)

make_build_dirs:
	@for dir in $$(find $(SRC_DIR)/* -type d | sed 's_$(SRC_DIR)/_$(OBJ_DIR)/_g'); \
	do \
		if [ ! -d "$$dir" ]; then mkdir -p $$dir; fi \
	done

$(NAME): $(OBJ) $(HEADER)
	$(LIB) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:
	@make fclean
	@make all
