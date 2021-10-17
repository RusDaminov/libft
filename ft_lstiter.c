/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:20 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 12:36:44 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
//{
//	t_list *tmp;
//
//	if (!lst || !f)
//		return ;
//	tmp = lst;
//	while (tmp)
//	{
//		f(tmp->content);
//		tmp = tmp->next;
//	}
//}
