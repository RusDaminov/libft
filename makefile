# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abernita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 11:45:18 by abernita          #+#    #+#              #
#    Updated: 2021/10/08 11:45:29 by abernita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library name
NAME = libft.a

#Folders containing *.c and *.h files
SRC = .
INCLUDES = .

#Source Files
NAMES = ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit \
		ft_isprint ft_itoa ft_isspace ft_memchr ft_memcmp  \
		ft_memcpy ft_memmove ft_memset ft_putchar_fd \
		ft_putendl_fd ft_putnbr_fd ft_calloc \
		ft_putstr_fd ft_strchr ft_strdup ft_striteri \
		ft_strjoin ft_strnstr ft_strrchr \
		ft_strlcat ft_strlen ft_strmapi ft_strncmp \
		ft_substr ft_strtrim ft_tolower ft_toupper \

#		ft_lstadd_front ft_lstdelone ft_lstiter \
#		ft_lstadd_back ft_lstmap
		ft_lstnew \

SRC_FILES = $(addsuffix .c, $(NAMES))
OBJ_FILES = $(addsuffix .o, $(NAMES))

#Compiler
CC = gcc

#Flags
CFLAGS = -g -Wall -Wextra -Werror
SANIT = -fsanitize=address

#Baseline command that compiles all the files
.PHONY: all
all: $(NAME)

#Command that compiles the *.c files, creates the library, and index the files
$(NAME):
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $(addprefix $(SRC)/, $(SRC_FILES))
	@ar -rc $(NAME) $(OBJ_FILES)
	@ranlib $(NAME)

.PHONY: clean
clean:
	@/bin/rm -rf $(OBJ_FILES)

.PHONY: fclean
fclean: clean
	@if test -e $(NAME); then\
		/bin/rm $(NAME);\
	fi;

#Command that cleans all the files and remakes the library
.PHONY: re
re: fclean all

#Testing code
.PHONY: test
test:
	@gcc fake.c -g $(SANIT)
	@./a.out

#Norminette
.PHONY: Norminette
norm:
	@norminette *.c *.h

