# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obraiki <obraiki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 17:49:09 by obraiki           #+#    #+#              #
#    Updated: 2022/05/21 17:23:32 by obraiki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

CC = cc

CFLAGS = -Wall -Wextra -Werror

INC = philo.h

SRC = main.c \
		cheks.c\
		init_philo.c\
		philo_utils.c\
		death.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)
	
$(NAME):$(OBJ) $(INC)
	$(CC) $(CFLAGS) $(OBJ) -o $@
	
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)

re: fclean all


 


