/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:57:00 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/24 13:58:45 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*target;
	int		i;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	target = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		target[i] = src[i];
		i++;
	}
	target[size] = '\0';
	return (target);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*stk;

	i = 0;
	stk = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stk)
		return (0);
	while (i < ac)
	{
		stk[i].size = ft_strlen(av[i]);
		stk[i].str = av[i];
		stk[i].copy = ft_strdup(av[i]);
		i++;
	}
	stk[i].str = 0;
	return (stk);
}
