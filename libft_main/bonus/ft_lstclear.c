/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:29:33 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 20:13:36 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst)
        return ;
    del(lst->content);
    free(lst);
}

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list    *temp;

    if (!*lst)
        return ;
    while (*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
    *lst = NULL;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void    ft_bzero(void *s, size_t n)
{
    size_t    i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = '\0';
        i++;
    }
}

void delete(void *del)
{
    ft_bzero(del, 10);
}


int main(void)
{

    char string1[10] = "fatma1";
    char string2[10] = "fatma2";
    char string3[10] = "fatma3";


    t_list *list;
    t_list *node1;
    t_list *node2;
    t_list *node3;
  

    node1 = ft_lstnew(string1);
    node2 = ft_lstnew(string2);
    node3 = ft_lstnew(string3);
    
    list = NULL;

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);
    
    ft_lstclear(&node2, &delete);
    
    ft_putendl_fd(string1, 1);
    ft_putendl_fd(string2, 1);
    ft_putendl_fd(string3, 1);

    return (0);
}
