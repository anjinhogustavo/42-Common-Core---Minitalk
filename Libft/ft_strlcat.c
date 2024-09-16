/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:13:45 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:13:45 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0 || dest_len >= size)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dest_len + src_len);
}
/*
int	main()
{
	char	dest[] = "corinthians";
	char	src[] = "nay nay";

	printf("%zu", ft_strlcat(dest, src, 10));

	printf("dest: %s, src: %s", dest, src);
	return (0);
}
*/
