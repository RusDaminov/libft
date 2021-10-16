/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:37:49 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 12:38:12 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
//{
//	t_list *n_list;
//	t_list *dub;
//	t_list *res;
//
//	if (!lst || !f)
//		return (NULL);
//	dub = lst;
//	n_list = NULL;
//	while (dub)
//	{
//		if (f(dub -> content))
//		{
//			res = ft_lstnew(f(dub->content));
//			if (!res)
//			{
//				ft_lstclear(&n_list, del);
//				return (NULL);
//			}
//			ft_lstadd_back(&dub, res);
//		}
//		dub = dub -> next;
//	}
//	return (n_list);
//}

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*ptr;

	ptr = NULL;
	while (lst)
	{
		elem = ft_lstnew((*f)(lst->content));
		if (!elem)
		{
			ft_lstclear(&ptr, (*del));
			return (NULL);
		}
		ft_lstadd_back(&ptr, elem);
		lst = lst->next;
	}
	return (ptr);
}
