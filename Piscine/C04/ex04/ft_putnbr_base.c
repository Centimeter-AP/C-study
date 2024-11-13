/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:59:23 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/06 17:38:59 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isbaseav(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (i < len)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	re_put(long int num, char *base, int len)
{
	if (num >= (long int)len)
	{
		re_put (num / (long int)len, base, len);
		write (1, &base[num % (long int)len], 1);
	}
	else
		write (1, &base[num], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	num;

	num = nbr;
	len = 0;
	while (base[len])
		len++;
	if (isbaseav (base, len) == 1)
	{
		if (num < 0)
		{
			num = -num;
			write (1, "-", 1);
		}
		re_put (num, base, len);
	}
}
