/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:11:32 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 13:56:33 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t    ft_strlen(const char *s)
{
    size_t    c;

    c = 0;
    while (s[c] != 0)
        c++;
        return (c);
}

size_t    ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t    dst_len;
    size_t    i;

    i = 0;
    dst_len = ft_strlen(dst);
    if (dst_len >= dstsize)
        return (dstsize + ft_strlen(src));
    while (dst_len + 1 < dstsize)
    {
        dst[dst_len] = src[i];
        dst_len++;
        i++;
    }
    dst[dst_len] = '\0';
    return (ft_strlen(dst) + ft_strlen(&src[i]));
}

#include <stdio.h>

int    main()
{
  char  dest[10] = "fatma";
  char  src[10] = "ozturk";
  
  printf("String before concatenation: \"%s\"\n", dest);
  printf("\n%d\n", ft_strlcat(dest, src, 8));
  printf("\nString after concatenation: \"%s\"\n", dest);
}

/* dst nin sonuna src stringini ekler. en fazla dstsize -strlen(dst)-1 karakter ekler.
 * dstsize ın 0 olması ve dst string in dstsizedan uzun olması(pratikte böyle bir şey olamaz ya dstsize yanlıştır ya da dst düzgün bir string değildir)durumları hariç NULL sonlanır.
 * return de destin son uzunluğu + src nin birleştiremediği kısmının uzunluğunu dönüyor yani ikisinin en baştaki toplam uzunluğunu dönüyor. /
