/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:21:47 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 15:46:46 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/* f fonksiyonunu s stringinin her bir karakterine uygular ve mallocla yer ayırdığımız str ye bu elemanları gönderir */

size_t    ft_strlen(const char *s)
{
    size_t    c;

    c = 0;
    while (s[c] != 0)
        c++;
        return (c);
}

char    f(unsigned int i, char c)
{
    c = c + 1;     /* buraya istediğimiz tarz bir fonksiyon tanımlıyoruz */
    return (c);
}

char    *ft_strmapi(char const *s, char(*f)(unsigned int,char))
{
    unsigned int    i;
    char    *str;
    unsigned int  len;
    
    len = ft_strlen(s);
    i = 0;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL || !s || !str || !f)
        return (NULL);
    while (i < len)
    {
        str[i] = f(i, s[i]);        /* str ye  s nin elemanlarının f fonksiyonu uygulanmış halini gönderiyoruz */
        i++;
    }
    str[i] = '\0';
    return (str);
}


int    main()
{
    char    s1[] = "abc";
    char    *s2;
    s2 = ft_strmapi(s1, *f);   /* printf("%s", ft_strmapi("abc", *f)) bu da olur. */
    printf("%s", s2);
}
