/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:15:10 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/24 11:17:42 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*result;
	int	size;

	size = max - min;
	if (min >= max)
		return (0);
	result = (int *)malloc(size * sizeof(int));
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
