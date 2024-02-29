/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grab_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:38:54 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/12 22:59:04 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

void	grab_fork(t_philo *philo, int f)
{
	pthread_mutex_lock(&philo->info->forks[f]);
	ft_print_msg(philo, "has taken a fork");
}
