/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:45:29 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/18 16:45:35 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_true(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		c = i + 1;
		while (str[c])
		{
			if (str[i] == str[c])
				return (0);
			c++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	i;
	int		l;

	l = base_true(base);
	if (l < 2)
		return ;
	i = nbr;
	if (base_true(base))
	{
		if (i < 0)
		{
			ft_putchar('-');
			i *= -1;
		}
		if (i < l)
		{
			ft_putchar(base[i]);
			return ;
		}
		ft_putnbr_base(i / l, base);
		ft_putchar(base[i % l]);
	}
}
