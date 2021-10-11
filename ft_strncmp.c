/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:32:18 by abernita          #+#    #+#             */
/*   Updated: 2021/10/11 13:07:19 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		diff;
	size_t	i;

	i = 1;
	if (n == 0)
		return (0);
	while ((s1 && s2) && *s1 == *s2 && i++ < n)
	{
		s1++;
		s2++;
	}
	diff = ((t_byte) * s1 - (t_byte) * s2);
	return (diff);
}
