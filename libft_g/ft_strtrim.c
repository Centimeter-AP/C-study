/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:02:26 by marvin            #+#    #+#             */
/*   Updated: 2022/09/16 07:33:01 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*back;
	char	*res;
	size_t	len;

	if (!s1 || !set)
		return (0);
	while (*s1)
	{
		if (!(ft_strchr(set, *s1)))
			break ;
		s1++;
	}
	back = (char *)s1 + (ft_strlen(s1) - 1);
	while (back >= s1)
	{
		if (!(ft_strchr(set, *back)))
			break ;
		back--;
	}
	len = ft_strlen(s1) - ft_strlen(back + 1);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	ft_strlcpy(res, s1, len + 1);
	return (res);
}
