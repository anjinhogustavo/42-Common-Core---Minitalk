/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:13:01 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:13:01 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*g;

	g = (char *)b;
	while (len > 0)
	{
		g[len - 1] = c;
		len--;
	}
	return (b);
}
/*
int	main()
{
	char	str[50]= "GeeksForGeeks is for programming geeks.";
	printf("%p\nNome do local armazenado", ft_memset(str, 'x', 4));
	printf("\n%s\nNome modificado",(char *)ft_memset (str, 'x', 4));
	return (0);
}*/
