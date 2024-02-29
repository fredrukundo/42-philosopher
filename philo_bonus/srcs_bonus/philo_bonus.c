/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:26:34 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/16 03:37:11 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/philo_bonus.h"

int	main(int ac, char **av)
{
	t_info	*info;

	if (ac != 5 && ac != 6)
		ft_puterr("Usage: ./philo <number_of_philos> <time_to_die> "
			"<time_to_eat> <time_to_sleep> "
			"[number_of_times_eacih_philosopher_must_eat]\n");
	info = ft_calloc(1, sizeof(*info));
	if (!info)
		ft_puterr("ft_philo_bonus.c:11 - Allocation Error!\n");
	ft_get_args(info, ac, av);
	ft_init_sem(info);
	ft_create_philos(info);
	ft_free_all(info);
	return (FT_SUCCESS);
}
