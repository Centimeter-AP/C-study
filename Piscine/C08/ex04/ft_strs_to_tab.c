/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:10:05 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/10 02:02:56 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (!dup)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tstruct;
	int			i;

	i = 0;
	tstruct = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		tstruct[i].size = ft_strlen(av[i]);
		tstruct[i].str = av[i];
		tstruct[i].copy = ft_strdup(av[i]);
		i++;
	}
	tstruct[i].str = 0;
	return (tstruct);
}
