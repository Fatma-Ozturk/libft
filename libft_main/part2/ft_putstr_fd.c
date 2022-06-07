/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:23:25 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 17:05:20 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

int main(void)
{

	ft_putstr_fd("Tddae em k2 w \n", 1);
	ft_putstr_fd("Edsf32nio2 e 21 \n", 1);
	ft_putstr_fd("S13 -0oi 01i3 \n", 1);
	ft_putstr_fd("Tdaxdnj o-213\n", 1);
	ft_putstr_fd("\ndadsadddadsa\n", 1);

	return (0);
}
