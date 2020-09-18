# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacharle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 15:45:53 by cacharle          #+#    #+#              #
#    Updated: 2020/09/18 16:37:01 by charles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

SRCDIR = src
INCDIR = include
OBJDIR = obj

INCDIR = include

CC = gcc
CCFLAGS = -I$(INCDIR) -Wall -Wextra -Werror

NAME = libft.a

INC = $(INCDIR)/libft.h
SRC = $(shell find $(SRCDIR) -type f -name '*.c')
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: prebuild $(NAME)

prebuild:
	@mkdir -vp $(OBJDIR)

$(NAME): $(OBJ) $(INCLUDE)
	@echo "Linking: $@"
	@$(LIB) $@ $(OBJ)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@echo "Compiling: $@"
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@echo "Removing objects"
	@$(RM) -r $(OBJDIR)

fclean: clean
	@echo "Removing library"
	@$(RM) $(NAME)

re: fclean all
