/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:34:14 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 19:11:40 by faozturk         ###   ########.tr       */
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


void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    if (!lst)
    {
        *lst = new;
        return ;
    }
    new->next = *lst;
    *lst = new;
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

int main(void)
{

    t_list **list;

    char string1[10] = "fatma1";
    char string2[10] = "fatma2";
    char string3[10] = "fatma3";
    char string4[10] = "fatma4";

    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *node4;

    list = malloc(sizeof(t_list *) * 5);
    list[4] = NULL;

    node1 = ft_lstnew(string1);
    node2 = ft_lstnew(string2);
    node3 = ft_lstnew(string3);
    node4 = ft_lstnew(string4);

    ft_lstadd_front(list, node1);
    ft_lstadd_front(list, node2);
    ft_lstadd_front(list, node3);
    ft_lstadd_front(list, node4);
    node1->next = NULL;

    printf("%s\n", node1->content);
    printf("%s\n", node2->content);
    printf("%s\n", node3->content);
    printf("%s\n", node4->content);
}
