/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:11:09 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:11:09 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len_numbers(int nbr)
{
	unsigned int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len += 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	nbr;

	len = ft_len_numbers(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr == 0)
		str[0] = '0';
	str[len] = '\0';
	while (nbr != 0)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}
/*
int	main()
{
	int	number = -2147483648;
	char	*result = ft_itoa(number);
	printf("Número: %d\nString: %s\n", number, result);
	free(result);
		return (0);
}
*/