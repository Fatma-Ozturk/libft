/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:23:41 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/03 15:50:22 by faozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*a;
	unsigned const char	*b;

	a = s1;
	b = s2;
	while (n--)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}

/* s1 string byte ını s2 string byte ı ile karşılaştırır. İki string uzunluğu da n byte uzunluğunda farz edilir. İki string aynıysa sıfır döndürür aksi takdirde ilk iki byte arasındaki farkı döndürür.Unsigned char değerleri gibi davranır. */

#include <stdio.h>

int	main()
{
	printf("%d", ft_memcmp("fatma", "ozturk", '5'));
}
