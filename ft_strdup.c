/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:29:06 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 19:29:16 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
    char	*new;
    int		i;
    int		size;

    size = 0;
    while (s1[size])
        ++size;
    if (!(new = malloc(sizeof(char) * (size + 1))))
    {
        return (NULL);
    }
    i = 0;
    while (s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}
