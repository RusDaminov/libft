/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:38:02 by abernita          #+#    #+#             */
/*   Updated: 2021/10/07 16:42:37 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct        s_list
{
    void            *content;
    struct s_list    *next;
}                    t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *b, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int    ft_islower(int c);
int    ft_isupper(int c);

size_t    ft_strlen(const char *s);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl_fd(char *s, int fd);

void    *ft_calloc(size_t count, size_t size);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);

t_list        *ft_lstlast(t_list *lst);
void    ft_lstiter(t_list *lst, void (*f)(void *));
void    ft_lstdelone(t_list *lst, void (*del)(void *));
t_list      *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list      *ft_lstnew(void *content);
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstadd_back(t_list **alst, t_list *new);


#endif
