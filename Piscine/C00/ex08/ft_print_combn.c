/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:03:32 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/05/29 17:31:25 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_combi(int val, int arrnbr, int max, int *arr)
{
	int	i;

	while (val < 11 - max + arrnbr)
	{
		arr[arrnbr] = val;
		if (arrnbr == max - 1)
		{
			i = 0;
			while (i < max)
			{
				putchar(arr[i] + '0');
				i++;
			}
			if (arr[0] != 10 - max)
			{
				putchar(',');
				putchar(' ');
			}
		}
		else
			ft_combi(val + 1, arrnbr + 1, max, arr);
		val++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];

	ft_combi(0, 0, n, arr);
}
