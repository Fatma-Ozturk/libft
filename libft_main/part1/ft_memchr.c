/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:20:53 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/16 20:08:24 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_memchr("fatma", 'm', 5));
}

/* verilen byte kadar kısmı kontrol edip orada aradığımız karakter var mı diye bakar.
 * aradığımız karakterden sonrasını çıktı verir */
