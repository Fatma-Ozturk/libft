/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:10:16 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/16 20:47:00 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	
	dup = (char *)malloc(ft_strlen(s1) + 1)
		if (dup == NULL)
			return (NULL);
	ft_memcpy ( dup, s1, (ft_strlen(s1) + 1));
	return (dup);
}

/* s1 stringi için hafızada yeterli alan tahsis eder, kopyalamayı yapar ve ona bir pointer döndürür.
 * * yeterli hafıza yoksa NULL döner.
 * duplicate edilecek alan için yer ayırt eder (s1 in eleman sayısı +1 kadar).
 * s1 i dup içine kopyalar ve s1 in aynısından oluşmuş olur */
