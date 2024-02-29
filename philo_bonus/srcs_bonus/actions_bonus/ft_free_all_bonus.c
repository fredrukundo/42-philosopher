/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:06:48 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/13 01:40:57 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/philo_bonus.h"

void	ft_free_all(t_info *info)
{
	int	ret;
	int	i;

	i = -1;
	while (++i < info->number_of_philosophers)
	{
		waitpid(-1, &ret, 0);
		if (ret != 0)
		{
			i = 0;
			while (i < info->number_of_philosophers)
				kill(info->id_table[i++], 15);
			break ;
		}
	}
	sem_close(info->forks);
	free(info->id_table);
	free(info);
}
