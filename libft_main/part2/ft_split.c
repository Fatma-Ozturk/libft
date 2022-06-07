/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:10:29 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 15:19:57 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

/* stringlerden oluşan bir array oluşturur.
 * delimiterlardan bölerek stringi parçalar ve parçaları eleman olarak kullanır.
 * burada aradaki delimiterlerden 1 fazla sayıda kelime olduğu için delimiterleri yani count ı 1 den başlatıp saydım ve kaç kelime(string) olacağını buldum.
 * table masamızdaki bütün stringler. bunlar için hafızada yer ayırdım.
 * a kelimenin sonuyken b de kelimenin başladığı yere denk geliyor. 
 * kelimeden önce istemediğimiz karakterleri b ile atlamış oluyoruz.
 * s + b den başlayarak(kelimenin başı) a-b kadar(kelime uzunluğu) duplicate edecek. */

int	count(const char *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 1;
	if (!s)
		return (0);
	while (s[i++])
	{
		if (s[i] == c)
			count++;
	}
	return (count);
}

char    *strndup(const char *s, size_t n)
{
    char          *str;
    unsigned int	i;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (str == NULL || !s || !str)
    return (NULL);
    i = 0;
    while (i < n)
    {
    str[i] = s[i];
    i++;
    }
    str[i] = '\0';
    return (str);
}

char	**ft_split(const char *s, char c)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	d;
	char			**table;

	a = 0;
	d = 0;
	table = malloc((count(s, c) + 1) * sizeof * table);
	if (table == NULL || !s)
		return (NULL);
	while (s[a])
	{
		while (s[a] == c)
			a++;
		b = a;
		while (s[a] && s[a] != c)
			a++;
		if (b < a)
			table[d++] = strndup(s + b, a - b);
	}
	table[d] = NULL;
	return (table);
}

int	main()
{
	char	**a = ft_split("fatma,buyukkoz,ozturk", ',');
	int	i = 0;
	while (a[i] != NULL)
		printf("%s\n", a[i++]);
		return (0);		                          /* her elemanı yazdırmasını burada a yı arttırarak sağladık. böyle yazmazsak sadece fatma yazıp bıraktı*/
}
