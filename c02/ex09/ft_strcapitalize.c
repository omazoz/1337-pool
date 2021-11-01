/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:50:16 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/12 14:18:55 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_Upercase(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] <= 'z' && c[i] >= 'a')
			c[i] = c[i] - 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_Upercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] <= 'Z' && str[i - 1] >= 'A')
				str[i] = str[i] + 32;
			if (str[i - 1] <= '9' && str[i - 1] >= '0')
				str[i] = str[i] + 32;
			if (str[i - 1] <= 'z' && str[i - 1] >= 'a')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
