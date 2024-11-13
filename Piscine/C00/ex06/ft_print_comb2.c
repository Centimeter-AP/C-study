/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:52:43 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/05/25 12:51:19 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c_1, char c_2, char c_3, char c_4)
{
	char	space;
	char	comm;

	space = ' ';
	comm = ',';
	write(1, &c_1, 1);
	write(1, &c_2, 1);
	write(1, &space, 1);
	write(1, &c_3, 1);
	write(1, &c_4, 1);
	if (c_1 != '9' || c_2 != '8' || c_3 != '9' || c_4 != '9')
	{
		write(1, &comm, 1);
		write(1, &space, 1);
	}
}

void	comb2_func(int a, int b)
{
	int	a_10;
	int	a_1;
	int	b_10;
	int	b_1;

	b_10 = b / 10;
	b_1 = b % 10;
	a_10 = a / 10;
	a_1 = a % 10;
	putchar(a_10 + '0', a_1 + '0', b_10 + '0', b_1 + '0');
}	

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			comb2_func(a, b);
			b++;
		}
		a++;
	}
}
