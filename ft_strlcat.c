/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:31:49 by abernita          #+#    #+#             */
/*   Updated: 2021/10/09 11:31:54 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t res;

    i = 0;
    while (dst[i] != '\0')
        ++i;
    res = 0;
    while (src[res] != '\0')
        ++res;
    if (dstsize <= i)
        res += dstsize;
    else
        res += i;
    j = 0;
    while (src[j] != '\0' && i + 1 < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (res);
}



