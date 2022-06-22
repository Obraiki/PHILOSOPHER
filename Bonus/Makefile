# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obraiki <obraiki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 16:30:12 by obraiki           #+#    #+#              #
#    Updated: 2022/05/21 17:21:57 by obraiki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BNAME = philo_bonus

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCB = philo_bonus.h

SRCB = philo_bonus.c \
		utils_bonus.c \
		init_data_bonus.c \
		init_philos_bonus.c \
		
OBJB = $(SRCB:.c=.o)

bonus: $(BNAME)

$(BNAME):$(OBJB) $(INCB)
	$(CC) $(CFLAGS) $(OBJB) -o $@

clean:
	@rm -rf $(OBJB)
fclean: clean
	@rm -rf $(BNAME)

re: fclean bonus
