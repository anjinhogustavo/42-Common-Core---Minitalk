/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:12:14 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:12:14 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}
/*
int	main()
{
	char	g;

	//g = '*'; //isso ja e printavel pois esta dentro dos printaveis da tabela
	g = 10; //isso nao e printavel pois na tabela ascii e um \n
	if(ft_isprint(g))
	{
		printf("Esse caracter e %cprintavel ", ft_isprint(g));
	}
	else
	{
		printf("Esse caracter nao e %cprintavel ", ft_isprint(g));
	}
	return (0);
}
*/
