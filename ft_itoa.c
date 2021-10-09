/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:12:11 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 19:39:27 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(int n)
{
    int size;

    size = 0;
    if (n <= 0)
        size++;
    while (n != 0)
    {
        n = n / 10;
        size++;
    }
    return (size);
}

static void	ft_fill_res(int size, int offset, int n, char *res)
{
    while (size > offset)
    {
        res[size - 1] = n % 10 + '0';
        n = n / 10;
        size--;
    }
}

char		*ft_itoa(int n)
{
    int		offset;
    int		size;
    char	*res;

    offset = 0;
    size = ft_get_size(n);
    if (!(res = (char *)malloc(sizeof(char) * size + 1)))
        return (0);
    if (n == -2147483648)
    {
        res[0] = '-';
        res[1] = '2';
        n = 147483648;
        offset = 2;
    }
    if (n < 0)
    {
        res[0] = '-';
        offset = 1;
        n = -n;
    }
    ft_fill_res(size, offset, n, res);
    res[size] = '\0';
    return (res);
}

