/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep_then_think.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:57:50 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/12 22:59:04 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

void	sleep_then_think(t_philo *philo)
{
	ft_print_msg(philo, "is sleeping");
	usleep(philo->info->time_to_sleep * 1000);
	ft_print_msg(philo, "is thinking");
}
