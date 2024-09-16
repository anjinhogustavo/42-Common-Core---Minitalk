/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-16 14:08:06 by ganjinho          #+#    #+#             */
/*   Updated: 2024-09-16 14:08:06 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_signal(int pid, char *word)
{
	int	bit;
	int	i;

	i = 0;
	while (word[i])
	{
		bit = 0;
		while (bit < 8)
		{
			// se minha palavra encriptada com bitwise for igual 0 bit envia pra sinal 1
			if (word[i] == 0)
				kill(pid, SIGUSR1);
			// se minha palavra encriptada com bitwise for igual 1 bit envia pra sinal 2
			else
				kill(pid, SIGUSR2);
			bit++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
}