/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:13:15 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/24 11:14:38 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char	*ft_strdup(char *src)
{
	int		i;
	char	*target;

	target = (char *)malloc(sizeof(src) * sizeof(char));
	if (!(target))
		return (NULL);
	i = 0;
	while (src[i])
	{
		target[i] = src[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}
