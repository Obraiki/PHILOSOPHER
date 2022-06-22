/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   death.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <obraiki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:16:50 by obraiki           #+#    #+#             */
/*   Updated: 2022/05/21 17:24:25 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_think(t_philo *philo)
{
	ft_printstat(philo, "the philo is thinking", 1);
}

void	ft_usleep(int tie)
{
	long long	t;

	t = get_time();
	while (get_time() - t < (long int)tie)
		usleep(10);
}

void	*check_death(t_philo *philo)
{
	int	i;

	i = 0;
	while (1)
	{
		i = 0;
		while (i < philo->data->nbrph)
		{
			if (philo[i].data->t_die <= get_time() - philo[i].data->last_eat[i])
			{
				if (philo[i].flag != 1)
					ft_printstat(&philo[i], "died", 0);
				philo[i].data->die = 1;
				break ;
			}
			i++;
		}
		if (philo->data->die == 1)
			break ;
	}
	return (NULL);
}
