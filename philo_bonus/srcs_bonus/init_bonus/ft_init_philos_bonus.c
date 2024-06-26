/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_philos_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 01:44:42 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/13 01:46:02 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/philo_bonus.h"

void	ft_init_philo(t_philo *philo, t_info *info)
{
	philo->info = info;
	philo->ate = 0;
	philo->last_meal = info->creation_time;
	philo->should_die = false;
}

void	ft_create_philos(t_info *info)
{
	int		i;
	int		id;
	t_philo	*philo;

	i = 0;
	philo = ft_calloc(info->number_of_philosophers, sizeof(t_philo));
	if (!philo)
		ft_puterr("ft_create_philos:14 - Allocation Error!\n");
	info->creation_time = ft_get_time();
	while (i < info->number_of_philosophers)
	{
		ft_init_philo(philo + i, info);
		id = fork();
		if (id == 0)
		{
			philo[i].id = i;
			ft_philo_actions(philo + i);
		}
		else
			info->id_table[i] = id;
		i++;
		usleep(100);
	}
	free(philo);
}
