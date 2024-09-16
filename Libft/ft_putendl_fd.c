/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 10:52:46 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-24 10:52:46 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
	}
	ft_putchar_fd ('\n', fd);
}
/*
int	main()
{
	char	*s;
	int	fd;

	s = "MC L0V1N";
	fd = 1;
	ft_putendl_fd(s, fd);
	printf("ola");
	return (0);
}
*/
