/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:08:15 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/08/31 22:04:09 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmake(int size, char *str, char *sep, char **strs)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		i++;
		if (i != size)
			str = ft_strcat(str, sep);
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		strl;
	int		i;

	strl = 0;
	i = 0;
	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		str[i] = 0;
		return (str);
	}
	while (i < size)
		strl += ft_strlen(strs[i++]);
	strl += ft_strlen(sep) * (size - 1);
	str = (char *)malloc(sizeof(char) * strl + 1);
	if (str == 0)
		return (0);
	str[strl] = 0;
	str = ft_strmake(size, str, sep, strs);
	return (str);
}

int main()
{
	char *
}
