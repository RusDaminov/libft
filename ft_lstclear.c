/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:39:46 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 12:40:01 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))

{
	t_list *current;
	t_list *next_lst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		next_lst = current->next;
		ft_lstdelone(current, del);
		*lst = next_lst;
	}
}