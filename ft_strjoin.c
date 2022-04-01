/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:00:00 by abernita          #+#    #+#             */
/*   Updated: 2021/10/09 16:44:16 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	int		i;
// 	int		j;
// 	char	*str;

// 	if (!s1 || !s2)
// 		return (0);
// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// 		i++;
// 	while (s2[j])
// 		j++;
// 	str = (char *) malloc((i + j + 1) * sizeof(char));
// 	if (str == NULL)
// 		return (NULL);
// 	i = -1;
// 	j = -1;
// 	while (s1[++i])
// 		str[i] = s1[i];
// 	while (s2[++j])
// 		str[i + j] = s2[j];
// 	str[i + j] = '\0';
// 	return (str);
// }

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	res = malloc(sizeof(*res) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!res)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	j = -1;
	while (s2[++j])
		res[i + j] = s2[j];
	free(s1);
	res[i + j] = '\0';
	return (res);
}
