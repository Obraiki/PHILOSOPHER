/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <obraiki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:47:32 by obraiki           #+#    #+#             */
/*   Updated: 2022/05/22 16:11:32 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_error(void)
{
	write(2, "error\n", 7);
	exit (1);
}

void	check_args(int ac, char **av)
{
	int	i;

	if (ac - 1 == 5 || ac - 1 == 4)
	{
		i = 1;
		while (av[i] != NULL)
		{
			if (ft_atoi(av[i]) <= 0)
				ft_error();
			i++;
		}
	}
	else
		ft_error();
}

void	get_args(int ac, char **av, t_data *data)
{
	data->nbp = ft_atoi(av[1]);
	data->tdie = ft_atoi(av[2]);
	data->teat = ft_atoi(av[3]);
	data->tsleep = ft_atoi(av[4]);
	if (ac - 1 == 5)
		data->nfe = ft_atoi(av[5]);
	else
		data->nfe = -1;
	if (data->tdie < 60 || data->teat < 60 || \
	data->tsleep < 60 || data->nbp > 200)
		ft_error();
	return ;
}

void	init_data(t_data *data)
{
	int	i;

	i = 0;
	data->philo = malloc(sizeof(t_philo) * data->nbp);
	data->currnt = get_time();
	while (i < data->nbp)
	{
		data->philo[i].num = i + 1;
		data->philo[i].data = data;
		data->philo[i].last_eat = get_time();
		data->die = 0;
		i++;
	}
}
