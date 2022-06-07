/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:16:11 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/16 16:08:00 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

/*
 * ft_memset(s, 0, n);
 */

/* n sıfırlanmış byte ı s stringine yazar. n sıfırsa hiçbir şey yapmaz. */

#include <stdio.h>

int	main()
{
	unsigned char	s[] = "fatma";
	ft_bzero(s, 3);
	printf("%s", s);
}
