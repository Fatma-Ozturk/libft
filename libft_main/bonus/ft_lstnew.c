/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:50:39 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 17:29:48 by faozturk         ###   ########.tr       */
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

int main(void)
{

    char string1[10] = "fatma1";
    char string2[10] = "fatma2";
    char string3[10] = "fatma3";
    char string4[10] = "fatma4";

    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *node4;

    node1 = ft_lstnew(string1);
    node2 = ft_lstnew(string2);
    node3 = ft_lstnew(string3);
    node4 = ft_lstnew(string4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    ft_putendl_fd((char *)(node1->content), 1);
    ft_putendl_fd((char *)(node2->content), 1);
    ft_putendl_fd((char *)(node3->content), 1);
    ft_putendl_fd((char *)(node4->content), 1);
    return (0);
}
