/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:15:30 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/09/16 07:30:43 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	arrlen(int n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		np;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	np = 0;
	len = arrlen(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (res);
	if (n < 0)
	{
		n *= -1;
		np = 1;
	}
	res[len--] = 0;
	while (len >= 0)
	{
		res[len--] = (n % 10) + '0';
		n /= 10;
	}
	if (np == 1)
		res[0] = '-';
	return (res);
}
