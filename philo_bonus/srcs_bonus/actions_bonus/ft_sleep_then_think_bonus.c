/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep_then_think_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:07:20 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/13 01:43:30 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/philo_bonus.h"

void	ft_sleep_then_think(t_philo *philo)
{
	ft_print_msg(philo, "is sleeping");
	usleep(philo->info->time_to_sleep * 1000);
	ft_print_msg(philo, "is thinking");
}
