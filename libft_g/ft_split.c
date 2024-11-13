/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:15:39 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/09/16 07:31:27 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**split_free(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

int	wordcount(char *str, char c)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			cnt++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (cnt);
}

char	*wordmm(char *str, char c, int *size)
{
	int		i;
	char	*arr;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	arr = (char *)malloc(sizeof(char) * (i + 1));
	if (!arr)
		return (0);
	ft_strlcpy(arr, str, i + 1);
	*size = i;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (wordcount((char *)s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			result[j] = wordmm((char *)&s[i], c, &size);
			if (!result[j])
				return (split_free(result));
			i += size;
			j++;
		}
	}
	result[j] = 0;
	return (result);
}
