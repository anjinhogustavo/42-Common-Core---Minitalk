/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 08:06:34 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-24 08:06:34 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sn;
	int	res;

	sn = 1;
	res = 0;
	while ((*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sn = -sn;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = ((res * 10) + (*str - '0'));
		str++;
	}
	return (res * sn);
}
