/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:52:29 by abernita          #+#    #+#             */
/*   Updated: 2021/10/08 20:00:35 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char
	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
//int main()
//{
//    const	char str1[]	= "0123456789";
//    char res;
//    char res1;
//
//    printf("%s\n", str1);
//    res = ft_strrchr(str1, 3);
//    printf("%s\n", str1);
//    res1 = strrchr(str1, 3);
//    printf("%s\n", str1);
//}