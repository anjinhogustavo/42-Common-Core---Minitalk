/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-16 14:08:33 by ganjinho          #+#    #+#             */
/*   Updated: 2024-09-16 14:08:33 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <sys/types.h>
# include "ft_printf/ft_printf.h"

typedef struct s_list
{
	char			c; // caractere que sera armaz
	struct s_list	*next; // ponteiro para o prox elemento da lista
}	t_list;

#endif
