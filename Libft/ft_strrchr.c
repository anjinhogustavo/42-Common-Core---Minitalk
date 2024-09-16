/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:14:22 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:14:22 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
int	main()
{
	char	str[] = "constantino";
	int	c;

	c = 't';
	printf("%s", ft_strrchr(str, c));
	return (0);
}
*/
