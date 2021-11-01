/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 13:15:33 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/14 14:46:51 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	put_char(char c)
{
	write(1, &c, 1);
}

void	hexa(unsigned char d)
{
	char	*Hexa;

	Hexa = "0123456789abcdef";
	put_char(Hexa[d / 16]);
	put_char(Hexa[d % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			put_char('\\');
			hexa((unsigned char)*str);
		}
		else
		{
			put_char(*str);
		}
		str++;
	}
}
