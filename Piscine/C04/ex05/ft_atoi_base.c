/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:23:21 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/06 18:25:05 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isbav(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (i < len)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
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

int	ft_strcheck(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoid(char *str, char *base, int len, int val)
{
	while (ft_strcheck(*str, base) != -1)
	{
		val = (val * len) + ft_strcheck(*str, base);
		str++;
	}
	return (val);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	val;
	int	np;

	val = 0;
	np = 1;
	len = 0;
	while (base[len])
		len++;
	if (isbav(base, len) == 1)
	{
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				np = -np;
			str++;
		}
		val = ft_atoid(str, base, len, val);
		val *= np;
		return (val);
	}
	return (0);
}
