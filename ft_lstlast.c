/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:49:29 by abernita          #+#    #+#             */
/*   Updated: 2021/10/12 11:49:38 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//t_list	*ft_lstlast(t_list *lst)
//{
//	while (lst)
//	{
//		if (lst->next == NULL)
//			return (lst);
//		lst = lst->next;
//	}
//	return (0);
//}

t_list	*ft_lstlast(t_list *lst)
{
	t_list *n_lst;

	if (!lst)
		return (NULL);
	n_lst = lst;
	while (n_lst -> next != NULL)
		n_lst = n_lst -> next;
	return (n_lst);
}

