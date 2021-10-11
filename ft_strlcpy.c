/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:34:32 by abernita          #+#    #+#             */
/*   Updated: 2021/10/10 17:59:19 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (dstsize > 0)
	{
		while (*(src + i) && i + 1 < dstsize)
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
	}
	return (ft_strlen(src));
}
//int	main(void)
//{
//    const char	*str = "Hello!";
//    char		dst1[42] = "Anne ";
//    char		dst2[42] = "Anne ";
//    char		dst3[42] = "Anne ";
//    char		dst4[42] = "Anne ";
//	char		dst5[42] = "MarVin Bot 42 ";
//    char		dst6[42] = "MarVin Bot 42 ";
//    char		dst7[42] = "Mar";
//    char		dst8[42] = "Mar";
//    int			ret1;
//    int			ret2;
//
//    ret1 = (int)strlcpy(dst1, str, 7);
//    printf("str_lib >> %d \n", ret1);
//    printf("str_lib >> %s \n", dst1);
//    ret2 = (int)ft_strlcpy(dst2, str, 7);
//    printf("str_ft >> %d \n", ret2);
//    printf("str_lib >> %s \n", dst2);
//
//    printf("================\n");
//
//    ret1 = (int)strlcpy(dst3, str, 3);
//    printf("str_lib >> %d \n", ret1);
//    printf("str_lib >> %s \n", dst3);
//    ret2 = (int)ft_strlcpy(dst4, str, 3);
//    printf("str_ft >> %d \n", ret2);
//    printf("str_lib >> %s \n", dst4);
//
//    return (0);
//}
