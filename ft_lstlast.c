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

t_list	*ft_lstlast(t_list *lst)
//{
//	if (lst == NULL)
//		return (0);
//	while (lst)
//	{
//		if (lst->next == NULL)
//			return (lst);
//		lst = lst->next;
//	}
//	return (lst);
//}
{
	while (lst && lst->next)

		lst = lst->next;

	return (lst);
}

