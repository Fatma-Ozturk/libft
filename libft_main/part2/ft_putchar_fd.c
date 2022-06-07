/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:20:37 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/17 16:50:35 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(void)
{

	ft_putchar_fd('T', 1);
	ft_putchar_fd('E', 1);
	ft_putchar_fd('S', 1);
	ft_putchar_fd('T', 1);
	ft_putchar_fd('\n', 1);

	return (0);
}

