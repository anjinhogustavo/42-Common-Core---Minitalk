/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-02 09:15:12 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-02 09:15:12 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void print_i_c(unsigned int index, char *c)
{
	printf("Index: %d, Char: %c\n", index, *c);
}

int	main()
{
	char str[] = "gusteivo";

	printf("String original: %s\n", str);
	printf("Utilizando ft_striteri:\n");
	ft_striteri(str, &print_i_c);
	return (0);
}
*/
