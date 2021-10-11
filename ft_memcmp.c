/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:56:20 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 16:00:34 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		value;
	size_t	i;

	value = 0;
	i = 0;
	while (value == 0 && i < n)
	{
		value += (*((byte *)s1 + i) - *((byte *)s2 + i));
		i++;
	}
	return (value);
}
