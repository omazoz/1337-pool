/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:45:35 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/24 13:45:42 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlin(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcal_size(int size, char **str, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	len += (ft_strlen(sep) * (size - 1)) + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*my_str;

	i = 0;
	if (size == 0)
	{
		my_str = malloc(sizeof(char));
		*my_str = 0;
		return (my_str);
	}
	my_str = (char *)malloc(sizeof(char) * ft_strcal_size(size, strs, sep));
	if (!(my_str))
		return (0);
	*my_str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(my_str, strs[i]);
		if (i < size - 1)
			ft_strcat(my_str, sep);
		i++;
	}
	return (my_str);
}
/*#include <stdio.h>
int	main()
{
	char *h[] = {"", "", ""};
	printf("%s", ft_strjoin(3, h, "+"));
}*/
