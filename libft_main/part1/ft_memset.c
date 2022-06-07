/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:51:54 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/03 14:16:48 by faozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/* verdiğimiz uzunluğa kadar olan kısmı verdiğimiz karakter ile değiştirir */

#include <stdio.h>

int	main()
{
	unsigned char	b[] = "ozturk";
	ft_memset(b, 'a', 4);
	printf("%s", b);
}
