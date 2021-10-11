/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:42:25 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 15:48:48 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	byte	*str;

	str = (byte *)s;
	while (n--)
		if (*str == (byte)c)
			return (str);
	else
		str++;
	return (NULL);
}
