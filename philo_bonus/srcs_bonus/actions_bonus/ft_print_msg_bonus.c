/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_msg_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:07:13 by frukundo          #+#    #+#             */
/*   Updated: 2024/02/13 01:42:33 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/philo_bonus.h"

void	ft_print_msg(t_philo *philo, char *msg)
{
	if (!philo->should_die)
		printf("%lli\t%i\t%s\n", ft_current_time(philo), philo->id + 1, msg);
}
