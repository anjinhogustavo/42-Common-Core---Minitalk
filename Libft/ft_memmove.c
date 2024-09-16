/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:12:56 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:12:56 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*s1;
	const char	*s2;

	if (!str1 && !str2)
		return (0);
	s1 = (char *)str1;
	s2 = (const char *)str2;
	if (s1 < s2)
	{
		while (n--)
			*s1++ = *s2++;
	}
	else if (s1 > s2)
	{
		s1 += n - 1;
		s2 += n - 1;
		while (n--)
			*s1-- = *s2--;
	}
	return (str1);
}
