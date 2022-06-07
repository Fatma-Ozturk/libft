/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:17:15 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 19:34:06 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}            t_list;
size_t    ft_strlen(const char *s)
{
    size_t    c;

    c = 0;
    while (s[c] != 0)
        c++;
    return (c);
}

void    ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return ;
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}
t_list    *ft_lstnew(void *content)
{
    t_list    *root;

    root = (t_list *)malloc(sizeof(t_list) * 1);
    if (root == NULL)
        return (0);
    root -> content = content;
    root -> next = NULL;
    return (root);
}
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    if (*lst  == NULL)
        *lst = new;
    else
    {
        while ((*lst)->next)
            *lst = (*lst)->next;
        (*lst)->next = new;
    }
}

t_list    *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst -> next != NULL)
        lst = lst->next;
    return (lst);
}

int main(void)
{

    char string1[10] = "fatma1";
    char string2[10] = "fatma2";


    t_list *list;
    t_list *node1;
    t_list *node2;


    node1 = ft_lstnew(string1);
    node2 = ft_lstnew(string2);


    list = NULL;

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);


    ft_putendl_fd(ft_lstlast(list)->content, 1);

}
