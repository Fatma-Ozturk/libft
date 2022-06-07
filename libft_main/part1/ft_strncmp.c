/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:39 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 14:16:50 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/* s1 ve s2 stringini karşılaştırır. 
 * n karakterden fazlasını karşılaştırmaz ve nulldan sonrası kıyaslanmaz.
 * s1in s2 den büyük,küçük veya eşit olmasına göre sıfırdan büyük,eşit ya da küçük bir integer döndürür.
 * Kıyaslama unsigned char kullanılarak bitirilir.
 * farklı olan ilk karakter arasındaki farkı döner orada fonksiyondan çıkar */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_strncmp("fatma", "fasma", '3'));
}
