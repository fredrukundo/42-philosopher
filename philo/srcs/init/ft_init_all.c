/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:02:14 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/16 01:04:39 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

int	ft_init_all(t_info *info, int ac, char **av)
{
	if (!info)
		return (FT_FAILURE);
	ft_get_args(info, ac, av);
	if (ft_check_info(*info, ac))
		return (FT_FAILURE);
	info->philo = ft_calloc(info->number_of_philosophers, sizeof(t_philo));
	info->forks = ft_calloc(info->number_of_philosophers,
			sizeof(pthread_mutex_t));
	if (!info->philo || !info->forks)
		return (FT_FAILURE);
	info->finish = false;
	info->all_ate = 0;
	ft_init_mutex(info);
	ft_create_philos(info);
	return (FT_SUCCESS);
}
