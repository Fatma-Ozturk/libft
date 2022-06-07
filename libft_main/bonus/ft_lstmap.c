/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:27:24 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/18 15:02:42 by faozturk         ###   ########.tr       */
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
    t_list    *tmp;

    if (!lst || !new)
        return ;
    if (*lst == NULL)
        *lst = new;
    else
    {
        tmp = *lst;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new;
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

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *root;
    t_list    *new;

    if (!lst)
        return (0);
    root = 0;
    while (lst)
    {
        if (!(new = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&root, del);
            return (NULL);
        }
        ft_lstadd_back(&root, new);
        lst = lst->next;
    }
    return (root);
}

int main(void)
{

void useless(void *content)
{
    (void)content;
}

void f(void *a)
{
  ((char *)a)[0] = 's';
}

    char string1[10] = "fatma1";
    char string2[10] = "fatma2";
    char string3[10] = "fatma3";



    t_list *list;
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *list_copy;
    
    node1 = ft_lstnew(string1);
    node2 = ft_lstnew(string2);
    node3 = ft_lstnew(string3);
    list = NULL;
    
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    list_copy = ft_lstmap(list, &f, &useless);
    while(list)
    {
      printf("%s\n", list->content);
      list = list->next;
    }
    return (0);
}
