/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:31:59 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/09 16:19:30 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);           /*  (*f)(i, &s[i])  */
		i++;
	}
}

/* stringteki her bir fonksiyona f fonksiyonunu uygular. her bir karakter adres olarak f ye geçer. gerekirse modifiye edilir.  */
