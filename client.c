/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:28:28 by anmakaro          #+#    #+#             */
/*   Updated: 2024/02/10 16:26:52 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_bit(int server_pid, char c)
{
	int	index_bit;

	index_bit = 0;
	while (index_bit < 8)
	{
		if (c & (0x01 << index_bit))
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(1000);
		index_bit++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	server_pid;

	i = 0;
	server_pid = ft_atoi(av[1]);
	if (ac == 3 && server_pid > 1)
	{
		while (av[2][i])
		{
			ft_send_bit(server_pid, av[2][i]);
			i++;
		}
		ft_send_bit(server_pid, '\n');
	}
	else
	{
		ft_putendl_fd(C_ERROR, 1);
		ft_putendl_fd(C_ARGS, 1);
		ft_putendl_fd(C_EX_ARGS, 1);
	}
	return (0);
}
