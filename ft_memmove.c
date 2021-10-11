/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:57:02 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 16:23:50 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_byte	*d;
	t_byte	*s;
	size_t	i;

	if (dst == src)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		d = (t_byte *)dst;
		s = (t_byte *)src;
		i = 0;
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dst);
}
