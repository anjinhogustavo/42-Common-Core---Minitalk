/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:13:22 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:13:22 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main()
{
	const char *string = "Hello, world!";
	int character = 'o';
	char *result = ft_strchr(string, character);

	if (result != NULL)
	{
		printf("C:'%c' na posição: %ld\n", character, result - string);
	}
	else
	{
		printf("O caractere '%c' não foi encontrado na string.\n", character);
	}
	return (0);
}
*/