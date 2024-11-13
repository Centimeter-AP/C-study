/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:33:38 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/07 19:54:38 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == 0 && *s2 == 0)
			return (0);
	}
	return (*s1 - *s2);
}

void	ft_sort(int argc, char **argv, int i)
{
	char	*tmp;

	while (1 < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp (argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		argc--;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	ft_sort (argc, argv, 0);
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
