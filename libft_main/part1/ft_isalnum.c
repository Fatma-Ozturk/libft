/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:26:36 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/01 12:11:02 by faozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c <= '9' && c >= '0'))
		return (1);
	return (0);
}

/*
 * return (ft_isdigit(c) || ft_isalpha(c));
 */

#include <stdio.h>

int	main()
{
	printf("%d", ft_isalnum('f'));
}


//isalnum alphanumeric mi diye bakar.