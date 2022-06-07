/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:25:55 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 16:51:36 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

int main(void)
{

	ft_putnbr_fd("Tddae em k2 w \n", 1);
	ft_putnbr_fd("Edsf32nio2 e 21 \n", 1);
	ft_putnbr_fd("S13 -0oi 01i3 \n", 1);
	ft_putnbr_fd("Tdaxdnj o-213\n", 1);
	ft_putnbr_fd("\ndadsadddadsa\n", 1);

	return (0);
}
