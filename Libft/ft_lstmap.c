/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-09 11:28:00 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-09 11:28:00 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*swap;

	if (!lst)
		return (0);
	new_lst = NULL;
	while (lst)
	{
		swap = (*f)(lst->content);
		new_node = ft_lstnew(swap);
		if (!new_node)
		{
			del(swap);
			ft_lstclear(&new_lst, del);
			return (new_lst);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
