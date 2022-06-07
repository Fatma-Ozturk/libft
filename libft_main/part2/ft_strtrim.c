/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:42:44 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 16:43:29 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/*  s stringini başındaki ve sonundaki (set içinde belirtilen) karakterler olmadan yazar. s stringine hafızada yer tahsis eder.
 *  eğer başta ve sonda set yoksa direkt s stringi kopyasını döner.
 *  yeterli bellek yoksa fonksiyon NULL döner. */ 

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))                    /* ilk karakterden itibaren set kontrolu yapıyor. setten bir karakter çıkınca s1 pointerı oraya atayacak. */
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))   /* sondaki setin hangi indexte olduğunu buluyoruz.*/
		i--;
	return (ft_substr(s1, 0, i + 1));  /* s1 pointerı yukarıda atadığımız yerden itibaren gösteriyor. yani baştaki seti atladı. oradan başlayarak yani 0 indexten başlayarak setin olmadığı ilk index + 1 sayıda (index 0 dan başladığı için ) sub a atayıp yer ayıracak. */
}

int	main()
{
	printf("%s", ft_strtrim("xyhelloz", "xyz"));
}
