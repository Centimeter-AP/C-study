/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:15:39 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/10 05:06:30 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	issep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i] || c == 0)
			return (1);
		i++;
	}
	return (0);
}

int	wordcount(char *str, char *charset)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (issep(str[i], charset) && str[i])
			i++;
		if (!issep(str[i], charset) && str[i])
		{
			cnt++;
			while (!issep(str[i], charset) && str[i])
				i++;
		}
	}
	return (cnt);
}

char	*wordmm(char *str, char *charset, int *size)
{
	int		i;
	char	*arr;

	i = 0;
	while (!issep(str[*size], charset) && str[*size])
		(*size)++;
	arr = (char *)malloc(sizeof(char) * (*size + 1));
	if (!arr)
		return (0);
	while (i < *size)
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (wordcount(str, charset) + 1));
	if (!result)
		return (0);
	while (str[i])
	{
		while (issep(str[i], charset) && str[i])
			i++;
		if (!issep(str[i], charset) && str[i])
		{
			size = 0;
			result[j] = wordmm(&str[i], charset, &size);
			i += size;
			j++;
		}
	}
	result[i] = 0;
	return (result);
}
