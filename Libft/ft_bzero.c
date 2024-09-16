/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:11:23 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:11:23 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main()
{
	char str[20] = "teste bzero";

	printf("antes do bzero %s\n", str);
	ft_bzero (str, sizeof(str));
	printf("depois do bzero %s\n", str);
	return (0);
}
*/
