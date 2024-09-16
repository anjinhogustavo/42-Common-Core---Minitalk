/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:13:28 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:13:28 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (! cpy)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int	main()
{
	const char	*org= "Gustavore";
	char	*cpy;

	cpy = ft_strdup(org);
	printf("orginal: %s:", org);
	printf("copia: %s:", cpy);
}
*/
