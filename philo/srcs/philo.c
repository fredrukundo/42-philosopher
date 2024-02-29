/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:02:36 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/14 17:11:44 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	main(int ac, char **av)
{
	t_info	*info;

	if (ac != 5 && ac != 6)
		return (ft_puterr("Usage: ./philo <number_of_philos> <time_to_die> "
				"<time_to_eat> <time_to_sleep> "
				"[number_of_times_eacih_philosopher_must_eat]\n"));
	info = ft_calloc(1, sizeof(*info));
	if (ft_init_all(info, ac, av) == FT_SUCCESS)
		ft_join_free(info);
	return (FT_SUCCESS);
}
