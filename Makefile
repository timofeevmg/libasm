# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epilar <epilar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 12:02:47 by epilar            #+#    #+#              #
#    Updated: 2021/03/13 14:51:03 by epilar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

S_SRC = ft_strlen.s\
		ft_strcpy.s\
		ft_strcmp.s

ASM = nasm

ASM_FLAGS = -fmacho64

S_OBJ = $(patsubst %.s, %.o, $(S_SRC))

all: $(NAME)
		ar rcs $(NAME) $(S_OBJ)

%.o : %.s
		$(ASM) $(ASM_FLAGS) $(S_SRC)

clean :
		@rm -f $(S_OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re check

check:
		gcc -Wall -Wextra -Werror $(NAME) main.c
