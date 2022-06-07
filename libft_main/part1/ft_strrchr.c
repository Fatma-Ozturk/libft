/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:31:23 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 15:04:01 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int            a;

    a = ft_strlen(s);
    while (a >= 0)
    {
        if (s[a] == (char)c)
            return ((char *)&s[a]);
        a--;
    }
    return (0);
}

#include <stdio.h>

int	main()
{
	printf("%s", ft_strrchr("fatmaozturk", 'a'));
}

/* int c yerine yazdığımız karakterin son göründüğü yeri belirler.
 * s stringini c karakterine rastlayana kadar sondan başa doğru tarıyoruz.
 * c yi bulduğumuz yerden itibaren output verir. */
