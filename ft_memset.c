/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:27:47 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 15:18:08 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	byte	*str;
	byte	ch;

	str = (byte *)b;
	ch = (byte)c;
	while (len--)
		*str++ = ch;
	return (b);
}
