# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epilar <epilar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 12:02:47 by epilar            #+#    #+#              #
#    Updated: 2021/03/15 10:30:34 by epilar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

S_SRC = ft_strlen.s\
		ft_strcpy.s\
		ft_strcmp.s\
		ft_write.s\
		ft_read.s\
		ft_strdup.s

ASM = nasm

ASM_FLAGS = -fmacho64

S_OBJ = $(patsubst %.s, %.o, $(S_SRC))

all: $(NAME)

$(NAME) : $(S_OBJ)
		ar rcs $(NAME) $(S_OBJ)

%.o : %.s
		$(ASM) $(ASM_FLAGS) $^ -o $@

clean :
		@rm -f $(S_OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re test

test:
		gcc -Wall -Wextra -Werror $(NAME) main.c
