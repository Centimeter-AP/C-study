/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 22:39:21 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/06 21:54:36 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	(void)argc;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
			write (1, &argv[j][i++], 1);
		write (1, "\n", 1);
		j++;
	}
	return (0);
}
