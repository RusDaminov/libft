/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:01:30 by abernita          #+#    #+#             */
/*   Updated: 2021/10/09 17:02:37 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	word_count;
	int		skip;

	word_count = 0;
	skip = 1;
	while (*s)
	{
		if (*s != c && skip)
		{
			skip = 0;
			word_count++;
		}
		else if (*s == c)
			skip = 1;
		s++;
	}
	return (word_count);
}

static void	make_words(char **words, char const *s, char c, size_t n_words)
{
	char	*ptr_c;

	while (*s && *s == c)
		s++;
	while (n_words--)
	{
		ptr_c = ft_strchr(s, c);
		if (ptr_c != NULL)
		{
			*words = ft_substr(s, 0, ptr_c - s);
			while (*ptr_c && *ptr_c == c)
				ptr_c++;
			s = ptr_c;
		}
		else
			*words = ft_substr(s, 0, ft_strlen(s) + 1);
		words++;
	}
	*words = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	num_words;
	char	**words;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	words = malloc(sizeof(char **) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	make_words(words, s, c, num_words);
	return (words);
}

//int     main(void)
//{
//    char	s1[] = "lorem      ipsum dolor sit amet";
//    //	char	s2[] = "dolor";
//    char	**words;
//    int		i = 0;
//
//    printf("================\n");
//    words = ft_split(s1, 'm');
//    while (*(words + i) != NULL)
//    {
//        printf("%s", *(words + i));
//        printf("\n");
//        i++;
//    }
//    //	printf("my_ft >> %s \n", ft_strtrim(s1, s2));
//    printf("================\n");
//
//    return (0);
//}
