/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:11:41 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:11:41 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}
/*
int	main()
{
	char	g;

	g = '*';
	if(ft_isalnum(g))
	{
		printf("Esse caracter e %calfanumerico ", ft_isalnum(g));
	}
	else
	{
		printf("Esse caracter nao e %calfanumerico ", ft_isalnum(g));
	}
	return (0);
}*/
