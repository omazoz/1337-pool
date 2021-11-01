/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:16:07 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/24 11:16:51 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;
	int	size;

	if (min >= max)
		return (0);
	size = max - min;
	res = (int *)malloc(size * sizeof(int));
	if (!res)
		return (-1);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	*range = res;
	return (i);
}
