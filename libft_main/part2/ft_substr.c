/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:42:10 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 15:51:30 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/* start indexi ile başlayan ve len uzunluğundaki alt stringi s stringinden ayırır ve hafıza alanına atar. */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!s || sub == NULL)
		return (NULL);
	while (len-- && start < ft_strlen(s))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

#include <stdio.h>
int	main()
{
	printf("%s", ft_substr("hello", 2, 3));
}
