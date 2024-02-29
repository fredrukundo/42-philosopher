/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:53:56 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/12 22:59:04 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

void	ft_print_msg(t_philo *philo, char *msg)
{
	pthread_mutex_lock(&philo->info->finish_lock);
	if (!philo->info->finish)
		printf("%lli\t%i\t%s\n", ft_current_time(philo), philo->id + 1, msg);
	pthread_mutex_unlock(&philo->info->finish_lock);
}
