/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:57:21 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/14 22:18:08 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philo.h"

int	ft_check_info(t_info info, int ac)
{
	if (ac == 6 && info.number_of_times_each_philosopher_must_eat <= 0)
		return (ft_puterr("ERROR: wrong num of must eat\n"));
	if (info.number_of_philosophers < 0)
		return (ft_puterr("ERROR: wrong num of philo\n"));
	if (info.time_to_die <= 0)
		return (ft_puterr("ERROR: wrong time to die\n"));
	if (info.time_to_eat <= 0)
		return (ft_puterr("ERROR: wrong time to eat\n"));
	if (info.time_to_sleep <= 0)
		return (ft_puterr("ERROR: wrong time to sleep\n"));
	return (FT_SUCCESS);
}
