/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:25:01 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/16 20:36:21 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	
	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/* src stringinin len byte ını dst stringine kopyalar. Stringler çakışırsa kopyalamaya sondan başlar böylece src yi destroy etmemiş olur.
 * dst - src < len derken aslında normalde kaybolacak karaktere kadar kopyalamakta sorun yok. mesela src +3 ten itibaren src nin 2 karakterini alırsak src yi bozmadan zaten kopyalama yapmış oluyoruz. src + 3 ten itibaren 4 karakter alsak src + 3 ten sonrasını değiştireceği için aradakiler bozulmaya uğrar.  */

#include <stdio.h>

int	main()
{
	unsigned char	src[] = "hello";

	ft_memmove(src + 3, src,2 );
	printf("%s", dst);
}
