/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:29:06 by abernita          #+#    #+#             */
/*   Updated: 2021/10/09 13:23:25 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s_alloc;

	len = ft_strlen(s1) + 1;
	s_alloc = (char *)malloc(len * sizeof(char));
	if (s_alloc == NULL)
		return (NULL);
	ft_memcpy(s_alloc, s1, len);
	return (s_alloc);
}
