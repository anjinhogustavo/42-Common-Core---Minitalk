/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-26 10:02:10 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-26 10:02:10 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *str, char c)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			counter++;
			while (str[i] != c && str[i] != '\0')
			{
				i++;
			}
		}
		else
			i++;
	}
	return (counter);
}

static char	*ft_strndup(const char *s, size_t len)
{
	char	*cpy;
	size_t	i;

	i = 0;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	while (i < len)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

static void	ft_free(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_fill(char const *s, char **array, char c)
{
	size_t	i;
	size_t	d;
	size_t	words;

	i = 0;
	d = 0;
	while (i < (size_t)ft_countwords(s, c))
	{
		while (s[d] == c)
			d++;
		words = 0;
		while (s[d + words] != '\0' && s[d + words] != c)
			words++;
		array[i] = ft_strndup(&s[d], words);
		if (!array[i])
		{
			ft_free(array);
			return (NULL);
		}
		d = d + words;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	funcwords;
	char	**array;

	funcwords = ft_countwords(s, c);
	array = malloc(sizeof(char *) * (funcwords + 1));
	if (!s || !(array))
		return (NULL);
	array = ft_fill(s, array, c);
	if (!array)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
/*
int main()
{
	char const *str = ";;;;string;;;;;dividida;por;virgula;;;;;";
	char **result = ft_split(str, ';');
	int	i;

	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		//free(result[i]);
		i++;
	}
	//free(result);
	return (0);
}
*/