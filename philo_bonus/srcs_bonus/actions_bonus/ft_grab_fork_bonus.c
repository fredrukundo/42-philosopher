/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grab_fork_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:06:55 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/13 01:41:24 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/philo_bonus.h"

void	ft_grab_fork(t_philo *philo)
{
	sem_wait(philo->info->forks);
	ft_print_msg(philo, "has taken a fork");
}
