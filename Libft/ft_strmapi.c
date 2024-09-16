/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-01 12:01:09 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-01 12:01:09 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char to_upperl(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main()
{
	char str[] = "hello, world!";

	printf("String original: %s\n", str);
	char *result = ft_strmapi(str, to_upperl);

	printf("String em maiúsculo: %s\n", result);
	free(result);
	return (0);
}
*/
