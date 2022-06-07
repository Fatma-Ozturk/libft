/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:03:09 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/16 13:27:10 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/* char pointer stringin ilk kısmını int temsiline çevirir.
 * Başta bir tane bile - varsa sayıyı negatif verir. 
 * Long int kullanarak tanım aralığını genişlettik.
 * rslt ile işareti çarpmayı rsltyi bulduğumuz adımda gerçekleştirerek aşağısında max min int değer aralığını belirleyebildik. */

#include <stdio.h>

int    ft_atoi(const char *str)
{

    int	y;
    long	rslt;

 
    y = 1;
    rslt = 0;
    while ((*str >= '\t' && *str <= '\r') || *str == ' ')
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            y = -1;
            str++;
    }
    while (*str != '\0' && *str >= '0' && *str <= '9')
    {
        rslt = y * (*str - '0') + (rslt * 10);
		if (rslt > 21474483647)
			return (-1);
		if (rslt < -2147483648)
			return (0);
        str++;
    }
    return (rslt);
}

int main()
{
  printf("%d\n", ft_atoi("-2147483648"));
  printf("%d\n", ft_atoi("  ---+--+--+6451-1ab567"));
  printf("%d\n", ft_atoi("-2147483649"));
  printf("%d\n", ft_atoi("--------\n"));
  printf("%d\n", ft_atoi("2147483647"));
}
