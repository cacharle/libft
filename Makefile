# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 15:45:53 by cacharle          #+#    #+#              #
#    Updated: 2020/01/15 08:48:42 by cacharle         ###   ########.fr        #
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
SRC_FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c \
			ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
			ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c \
			ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
			ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
			ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
			ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c \
			ft_strrchr.c ft_split.c ft_strstr.c ft_substr.c ft_strtrim.c \
			ft_tolower.c ft_toupper.c ft_strlcpy.c ft_calloc.c ft_strndup.c \
			ft_strjoin_free.c ft_strjoin_free_snd.c ft_strcount.c \
			$(GET_NEXT_LINE_DIR)/get_next_line.c ft_isdigit.c
		# ft_printf.c ft_sprintf.c ft_snprintf.c ft_asprintf.c ft_dprintf.c \
		# ft_vprintf.c ft_vsprintf.c ft_vsnprintf.c ft_vasprintf.c ft_vdprintf.c
SRC = $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

HEADER_FILES = libft.h get_next_line.h
HEADER = $(addprefix $(INCLUDE_DIR)/,$(HEADER_FILES))


# BONUSSRC = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
# 			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
# 			ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstpop_front_bonus.c
# BONUSOBJ = $(BONUSSRC:.c=.o)

all: dir_prerequisit $(NAME)

dir_prerequisit:
	@if [ ! -d "$(OBJ_DIR)" ]; then mkdir $(OBJ_DIR); fi
	@if [ ! -d "$(OBJ_DIR)/$(GET_NEXT_LINE_DIR)" ]; then \
		mkdir $(OBJ_DIR)/$(GET_NEXT_LINE_DIR); fi

$(NAME): $(OBJ) $(HEADER)
	$(LIB) $(NAME) $(OBJ)

# bonus: $(BONUSOBJ) $(HEADER)
# 	$(LIB) $(NAME) $(BONUSOBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
