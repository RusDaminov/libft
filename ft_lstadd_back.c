/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:26:35 by abernita          #+#    #+#             */
/*   Updated: 2021/10/25 19:28:55 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*tmp;

	if (!new)
		return ;
	tmp = *lst;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next
		tmp -> next = new;;
	}
	else
		*lst = new;
}
