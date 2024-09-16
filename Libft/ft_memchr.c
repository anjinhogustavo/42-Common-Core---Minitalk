/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:12:23 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:12:23 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char )str[i] == (unsigned char )c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char str[] = "Hello, World!";
    char procurar = 'W';
    size_t str_len;

    str_len = ft_strlen(str);

    char *result = ft_memchr(str, procurar, ft_strlen);

    if (result != NULL)
    {
        printf("'%c' foi encontrado em: %ld\n", procurar, result - str);
    }
    else
    {
        printf("O caractere '%c' nao foi encontrado.\n", procurar);
    }

    return 0;
}
*/
