/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:14:05 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:14:05 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
}
/*
int	main()
{
	const char *s1 = "Gustavo";
	const char *s2 = "Gusteivo";
	size_t	n;

	n = 5;
	int result = ft_strncmp(s1, s2, n);

	if(result == 0)
	printf("String iguais %zu
}*/
