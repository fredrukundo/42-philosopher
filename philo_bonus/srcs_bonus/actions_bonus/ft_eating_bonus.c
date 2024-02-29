/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eating_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:06:41 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/13 01:40:23 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/philo_bonus.h"

void	ft_eating(t_philo *philo)
{
	philo->last_meal = ft_get_time();
	ft_print_msg(philo, "is eating");
	usleep(philo->info->time_to_eat * 1000);
}
