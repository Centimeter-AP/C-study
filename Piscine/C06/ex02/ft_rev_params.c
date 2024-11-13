/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:02:33 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/06 21:54:22 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i])
			write (1, &argv[argc - 1][i++], 1);
		write (1, "\n", 1);
		argc--;
	}
	return (0);
}
