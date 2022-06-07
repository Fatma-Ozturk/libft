/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:36:35 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/16 20:16:16 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* src hafıza bölgesinden n byte ı dst hafıza bölgesine kopyalar. dst ve src çakışırsa tanımsız olur. */

#include <stdio.h>

int	main()
{
	unsigned char	src[] = " world!";
	unsigned char	dst[] = "hello";

	ft_memcpy(dst+5, src, 8);
	printf("%s", dst);
}
