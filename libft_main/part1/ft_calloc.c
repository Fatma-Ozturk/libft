/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faozturk <faozturk@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:16:49 by faozturk          #+#    #+#             */
/*   Updated: 2022/02/16 17:54:47 by faozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*bytes;

	bytes = malloc(count * size);
	if (bytes)
		ft_bzero(bytes, size * count);
	return (bytes);
}

int main(void)
{
  char    *a;
  a = ft_calloc(5, sizeof(char));
  int i = 0;
  while(i < 5)
  {
     printf("%d", a[i]);
     i++;
  }
}

/* count nesneleri için bitişik olarak yeterli hafıza tahsis eder ve bir pointer döndürür. bu alan sıfır değeri byte ı ile doldurulur. 
 * size atayacağımız değişkenin türüne göre değişir. mesela charsa size 1 olur int ise size 2 olur.count ise sayısı yani iki tane char tipi değişken için ayıracağımız alan 2*1 olacak.
 * ayırdığımız hafıza alanını byte a attık ve bu alanları null ile doldurduk.
 * bize null ile doldurulmuş byte pointerının adresini dönüş yaptı.
 * malloc sadece yer ayırır , ayırdığı yerin null olduğu garantisini vermez. calloc yer ayırır ve orayı null yapar
 * */


