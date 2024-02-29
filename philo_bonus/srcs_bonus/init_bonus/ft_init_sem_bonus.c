/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_sem_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 01:44:53 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/13 01:47:01 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/philo_bonus.h"

int	ft_init_sem(t_info *info)
{
	info->forks = sem_open("sem", O_CREAT | O_EXCL, 0644,
			info->number_of_philosophers);
	if (info->forks == SEM_FAILED || sem_unlink("sem"))
		ft_puterr("ft_init_sem:12 - error initializing semaphore\n");
	return (FT_SUCCESS);
}
