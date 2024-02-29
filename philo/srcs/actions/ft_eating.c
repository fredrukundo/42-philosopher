/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eating.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:37:43 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/12 22:59:04 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

void	ft_eating(t_philo *philo)
{
	ft_print_msg(philo, "is eating");
	usleep(philo->info->time_to_eat * 1000);
	philo->last_meal = ft_get_time();
	philo->ate++;
	if (philo->ate == philo->info->number_of_times_each_philosopher_must_eat)
		philo->info->all_ate++;
}
