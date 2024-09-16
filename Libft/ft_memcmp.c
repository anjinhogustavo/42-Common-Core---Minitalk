/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:12:38 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:12:38 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	int	result;

	result = memcmp(str1,str2,3);

	if (result == 0)
	{
		printf("String igual\n");
	}
	else
	{
		printf("string diferentes\n");
	}
	return (0);
}
*/