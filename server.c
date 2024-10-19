/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-16 14:08:36 by ganjinho          #+#    #+#             */
/*   Updated: 2024-09-16 14:08:36 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
static void	append_char(t_list **list, char c)
{
	t_list	*new_node;
	t_list	*temp;
	new_node = malloc(sizeof(t_list));
	if (! new_node)
		exit(1);
	new_node->c = c;
	new_node->next = NULL;
	if (*list == NULL)
		*list = new_node;
	else
	{
		temp = *list;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
}
static void	print_free(t_list **list)
{
	t_list	*temp;
	t_list	*next;
	if (*list == NULL || ((*list)->c == '\0' && (*list)->next == NULL))
		ft_printf("\n");
	else
	{
		temp = *list;
		while (temp != NULL)
		{
			ft_printf("%c", temp->c);
			next = temp->next;
			free(temp);
			temp = next;
		}
		ft_printf("\n");
	}
	*list = NULL;
}
static void	handler(int signal, siginfo_t *info, void *context)
{
	static t_list	*str_list = NULL;
	static char		c;
	static int		i;
	(void)context;
	if (signal == SIGUSR1 || signal == SIGUSR2)
	{
		c = (c << 1) | (signal == SIGUSR2);
		i++;
		if (i == 8)
		{
			append_char(&str_list, c);
			if (c == '\0')
			{
				print_free(&str_list);
			}
			c = 0;
			i = 0;
		}
		kill(info->si_pid, SIGUSR1);
	}
}
int	main(int ac, char **av)
{
	struct sigaction	sh;
	(void)av;
	if (ac != 1)
	{
		ft_printf("ERROR! The argument number is wrong");
		return (0);
	}
	sh.sa_sigaction = &handler;
	sigemptyset(&sh.sa_mask);
	sh.sa_flags = SA_SIGINFO;
	ft_printf("Server PID: %d\n", getpid());
	sigaction(SIGUSR1, &sh, NULL);
	sigaction(SIGUSR2, &sh, NULL);
	while (1)
		pause ();
	return (0);
}
