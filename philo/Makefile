# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 16:03:47 by frukundo          #+#    #+#              #
#    Updated: 2024/02/12 23:04:37 by frukundo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= philo

CC			= cc
FLAGS		= -Wall -Wextra -Werror
RM			= rm -rf
PTHREAD		= -pthread

# colors

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

SRCS = $(addprefix srcs/, philo.c utils/ft_atoi.c utils/ft_puterr.c utils/ft_strlen.c utils/ft_calloc.c utils/ft_get_time.c \
		init/ft_init_all.c init/ft_init_philos.c init/ft_get_args.c init/ft_check_info.c init/ft_init_mutex.c \
		actions/ft_down_fork.c actions/ft_grab_fork.c actions/ft_join_free.c actions/ft_philo_actions.c \
		actions/ft_print_msg.c actions/ft_sleep_then_think.c actions/ft_eating.c)

OBJS = $(SRCS:.c=.o)
HEADER = includes/philo.h

all: $(NAME)


$(NAME): $(OBJS) $(HEADER)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@ $(CC) $(OBJS) $(PTHREAD) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.c $(HEADER)
	@printf "$(CURSIVE)$(GRAY) 	- Making object file ... $(RESET)\n"
	@ $(CC) -Wall -Wextra -Werror $(PTHREAD) -c $< -o $@

clean:
	@ $(RM) $(OBJS)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@ $(RM) $(NAME)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME)... $(RESET)\n"
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re