/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:13:19 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/09 20:51:02 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isbav(char *base)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (base[len])
		len++;
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
	while (ft_strcheck(*str, base) != -1 && *str)
	{
		val = (val * len) + ft_strcheck(*str, base);
		str++;
	}
	return (val);
}

long long	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	val;
	int	np;

	val = 0;
	np = 1;
	len = 0;
	while (base[len])
		len++;
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
