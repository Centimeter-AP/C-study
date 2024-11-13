/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:25:43 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/08 01:27:28 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	val;

	val = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb > 1)
	{
		val *= nb;
	}
	return (val);
}
