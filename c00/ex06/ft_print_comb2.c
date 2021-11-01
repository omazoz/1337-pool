/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 11:08:01 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/07 13:34:17 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	putchar(char a)
{
	write(1, &a, 1);
}

void	operator( int x, int y)
{
	putchar(x / 10 + '0');
	putchar(x % 10 + '0');
	putchar(' ');
	putchar(y / 10 + '0');
	putchar(y % 10 + '0');
	if (x != 98)
	{
		putchar(',');
		putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			operator(a, b);
			b++;
		}
		a++;
	}	
}
