/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:38:10 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/08 01:29:19 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	val;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	val = nb;
	while (power-- > 1)
	{
		val *= nb;
	}
	return (val);
}
