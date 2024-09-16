/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:14:29 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:14:29 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (*s == '\0' || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new = ((char *)malloc(sizeof(char) * (len + 1)));
	if (! new)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main()
{
	char	*str = " ";
	char	*sub;

	sub = ft_substr(str,2,2);
	printf("Original string:%s\n", str);
	printf("Substring:%s", sub);
	free(sub);
	return (0);
}
*/