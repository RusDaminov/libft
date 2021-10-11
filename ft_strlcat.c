/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:31:49 by abernita          #+#    #+#             */
/*   Updated: 2021/10/09 17:23:53 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	offset;
	int		src_i;

	dst_len = ft_strlen(dst);
	offset = dst_len;
	src_i = 0;
	if (dstsize < dst_len + 1)
		return (ft_strlen(src) + dstsize);
	if (dstsize > dst_len + 1)
	{
		while (*(src + src_i) && offset < dstsize - 1)
			*(dst + offset++) = *(src + src_i++);
		*(dst + offset) = '\0';
	}
	return (dst_len + ft_strlen(src));
}

//int	main(void)
//{
//    const char	*str = "Hello!";
//    char		dst1[42] = "Valera ";
//    char		dst2[42] = "Denis ";
//    char		dst3[42] = "Sanya ";
//    char		dst4[42] = "Anna ";
//    char		dst5[42] = "Bakyt ";
//    char		dst6[42] = "Cobby ";
//    char		dst7[42] = "Marat ";
//    char		dst8[42] = "Margo ";
//    int			res1;
//    int			res2;
//
//    res1 = (int)strlcat(dst1, str, 13);
//    printf("str_lib >> %d \n", res1);
//    printf("dst_lib >> %s \n", dst1);
//    res2 = (int)ft_strlcat(dst2, str, 13);
//    printf("str_ft >> %d \n", res2);
//    printf("dst_lib >> %s \n", dst2);
//
//    printf("================\n");
//
//    res1 = (int)strlcat(dst3, str, 30);
//    printf("str_lib >> %d \n", res1);
//    printf("dst_lib >> %s \n", dst3);
//    res2 = (int)ft_strlcat(dst4, str, 23);
//    printf("str_ft >> %d \n", res2);
//    printf("dst_lib >> %s \n", dst4);
//
//    printf("================\n");
//
//    res1 = (int)strlcat(dst5, str, 18);
//    printf("str_lib >> %d \n", res1);
//    printf("dst_lib >> %s \n", dst5);
//    res2 = (int)ft_strlcat(dst6, str, 18);
//    printf("str_ft >> %d \n", res2);
//    printf("dst_lib >> %s \n", dst6);
//
//    printf("================\n");
//
//    res1 = (int)strlcat(dst7, str, 12);
//    printf("str_lib >> %d \n", res1);
//    printf("dst_lib >> %s \n", dst7);
//    res2 = (int)ft_strlcat(dst8, str, 12);
//    printf("str_lib >> %d \n", res2);
//    printf("dst_lib >> %s \n", dst8);
//
//    return (0);
//}