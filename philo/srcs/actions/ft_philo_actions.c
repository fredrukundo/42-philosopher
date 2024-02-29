/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:50:52 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/15 01:35:44 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

void	*philosophers(void *arg)
{
	t_philo	*philo;
	int		left_fork;
	int		right_fork;

	philo = (t_philo *)arg;
	while (!philo->should_die && !philo->info->finish)
	{
		right_fork = philo->id;
		left_fork = (philo->id + 1) % philo->info->number_of_philosophers;
		grab_fork(philo, right_fork);
		if (philo->info->number_of_philosophers == 1)
		{
			usleep(1000000);
			break ;
		}
		grab_fork(philo, left_fork);
		ft_eating(philo);
		down_fork(philo, right_fork, left_fork);
		sleep_then_think(philo);
	}
	return (NULL);
}
