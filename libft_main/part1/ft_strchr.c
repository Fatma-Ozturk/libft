/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:08:03 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/16 20:41:12 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

#include <stdio.h>

int	main()
{
	printf("%s", ft_strchr("fatma", 'm'));
}

/* Stringte int c yerine verdiğimiz karakterin ilk göründüğü yeri belirler ve oradan sonra çıktı verir. */
/* memchr ve strchr farkı -> strchr null karakter görünce döngüyü sonlandırır; memchr hafıza bölümünde işlem yaptığı için null ile sonlanmaz o yüzden ekstradan fonksiyonda n değişkeni ile lenghti belirtmek gerekir böylece döngü nereye kadar devam edeceğini bilmiş olur. */
