# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-lang <ede-lang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 14:46:49 by ede-lang          #+#    #+#              #
#    Updated: 2024/07/05 10:05:19 by ede-lang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR		:= ./
OBJDIR		:= ./obj

NAME	:= Zombie
CC		:= clang++
SRCS	:= main.cpp zombieHorde.cpp Zombie.class.cpp
OBJS	:= $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

CFLAGS	:= -Wextra -Wall -Werror -g -std=c++98


all: $(NAME)

$(NAME): $(OBJS) | $(OBJDIR)
	@$(CC) $(OBJS) $(HEADERS) -o $(NAME)


$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)\n"

$(OBJDIR):
	mkdir -p $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re, valgrind, run