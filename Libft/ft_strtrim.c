/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-24 08:42:57 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-24 08:42:57 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[i] && ft_strchr(set, s1[j - 1]))
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
		if (!str)
			return (NULL);
	}
	return (str);
}
/*
int main()
{
	char *s1 = "aaaHello,aaaaaaaa worldaaaa";
	char *set = "aaaa";

	char *trimmed_str = ft_strtrim(s1, set);
	printf ("String original: '%s'\n", s1);
	printf ("String após trim: '%s'\n", trimmed_str);
	free (trimmed_str);

		return (0);
}
*/