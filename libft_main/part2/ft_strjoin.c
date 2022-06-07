/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:43:56 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 15:45:13 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/* yeni bir stringe s1 + s2 yi ekler ve yeni stringe hafıza alanı atar. */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != 0)
		c++;
		return (c);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	unsigned int	i;
	unsigned int	a;
    
    i = 0;
	a = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == NULL || !(s1) || !(s2))
		return (NULL);
	while(s1[i])
	{
	new[i] = s1[i];
	i++;
	}
	while(s2[a])
        new[i++] = s2[a++];
	new[i] = '\0';
	return (new);
}

int	main()
{
	printf("%s", ft_strjoin("fatma", "ozturk"));
}
