/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:11:51 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:11:51 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z')
		|| (i >= 'A' && i <= 'Z'))
		return (42);
	return (0);
}
/*
int	main(void)
{
	char	c;
	char	result;


	c = 'C';
	result = ft_isalpha(c);
	printf("%d\n", result);
}
*/
