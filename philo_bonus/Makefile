# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 23:26:41 by frukundo          #+#    #+#              #
#    Updated: 2024/02/13 02:36:40 by frukundo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= philo_bonus

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

SRCS = $(addprefix srcs_bonus/, philo_bonus.c utils_bonus/ft_atoi_bonus.c utils_bonus/ft_puterr_bonus.c utils_bonus/ft_strlen_bonus.c utils_bonus/ft_calloc_bonus.c utils_bonus/ft_get_time_bonus.c \
		init_bonus/ft_init_philos_bonus.c init_bonus/ft_get_args_bonus.c init_bonus/ft_init_sem_bonus.c \
		actions_bonus/ft_down_forks_bonus.c actions_bonus/ft_grab_fork_bonus.c actions_bonus/ft_free_all_bonus.c actions_bonus/ft_philo_actions_bonus.c \
		actions_bonus/ft_print_msg_bonus.c actions_bonus/ft_sleep_then_think_bonus.c actions_bonus/ft_eating_bonus.c)

OBJS = $(SRCS:.c=.o)
HEADER = includes_bonus/philo_bonus.h

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