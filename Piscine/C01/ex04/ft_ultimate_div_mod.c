/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:14:42 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/05/26 19:16:28 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_d;
	int	tmp_m;

	tmp_d = *a / *b;
	tmp_m = *a % *b;
	*a = tmp_d;
	*b = tmp_m;
}