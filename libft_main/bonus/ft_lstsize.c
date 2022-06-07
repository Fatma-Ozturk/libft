/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:06:48 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 19:02:38 by faozturk         ###   ########.tr       */
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

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n, fd);
    }
    else if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + '0', fd);
    }
    else
        ft_putchar_fd(n + '0', fd);
}

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

int    ft_lstsize(t_list *lst)
{

    unsigned int    size;

    size = 0;
    while (lst)
    {
        size++;
        lst = lst->next;
    }
    return (size);
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

    ft_putnbr_fd(ft_lstsize(node4), 1);

    return(0);
}
