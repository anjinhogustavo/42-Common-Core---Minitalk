/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 09:16:03 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-24 09:16:03 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	int	fd;
	fd = 1;

	ft_putchar_fd('o', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('a', fd);
	ft_putchar_fd('\n', fd);
	return (0);
}
*/
