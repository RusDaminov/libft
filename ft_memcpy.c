/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:26:31 by abernita          #+#    #+#             */
/*   Updated: 2021/10/09 13:11:01 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;
	size_t	i;

	ptr_d = (char *)dst;
	ptr_s = (char *)src;
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		*(ptr_d + i) = *(ptr_s + i);
		i++;
	}
	return (dst);
}
