/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:18:29 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/18 12:07:34 by faozturk         ###   ########.tr       */
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

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst)
        return ;
    while (lst)
    {
        f(lst -> content);
        lst = lst -> next;
    }
}

void f(void *a)
{
  ((char *)a)[0] = 's';
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

    ft_lstiter(list, &f);
    while(list)
    {
      printf("%s\n", list->content);
      list = list->next;
    }
    
     

    return (0);
}
