/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:14:12 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:14:12 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0 && big == NULL)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j < len))
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)(big + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main()
{
    const char	*big = "Gusteivo";
    const char	*little = "tei";
    size_t	len = 8;
    char	*result = ft_strnstr(big, little, len);

    if (result != NULL)
    {
        printf("substring: %s\n", result);
    }
    else
    {
        printf("nao tem substring.\n");
    }

    return (0);
}
