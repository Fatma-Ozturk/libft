/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:39:26 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 14:37:57 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/* haystack stringi içindeki needle stringinin ilk göründüğü yeri belirler, len karakterden fazlasını aramaz.
 * nulldan sonrasını aramaz.
 * needle boşsa haystack döner.needle haystackta yoksa null döner aksi takdirde needle ın görünen ilk karakteri bir pointer olarak döner.
 * it should only be used when portability is not a concern
 * needle ın ilk göründüğü yerden itibaren output verir */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	str;

	if (!*needle)
		return ((char *)haystack);
	str = ft_strlen(needle);
	while (len)
	{
		if (!*haystack || str > len--)
			return (0);
		if (!ft_strncmp(haystack, needle, str))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

int	main()
{
	printf("%s", ft_strnstr("fatmaneedlebuyukkoz", "needle", 20));
}
