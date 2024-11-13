/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 08:20:28 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/09 20:49:44 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			isbav(char *base);
long long	ft_atoi_base(char *str, char *base);

char	*ft_conv(int size, char *nbrstr, char *base_to, long long nbr_int)
{
	int	tolen;

	tolen = 0;
	while (base_to[tolen])
		tolen++;
	while (size > 0)
	{
		nbrstr[size - 1] = base_to[nbr_int % (long long)tolen];
		size--;
		nbr_int /= tolen;
		if (nbr_int == 0)
			break ;
	}
	return (nbrstr);
}

char	*ft_strmal(int tolen, long long nbr_int, int *size)
{
	char		*nbrstr;
	long long	nbr;

	nbr = nbr_int;
	if (nbr_int == 0)
		*size = 1;
	else
	{
		while (nbr_int != 0)
		{
			(*size)++;
			nbr_int /= tolen;
		}
	}
	if (nbr < 0)
		(*size)++;
	nbrstr = (char *)malloc(sizeof(char) * (*size + 1));
	if (!nbrstr)
		return (0);
	if (nbr < 0)
		nbrstr[0] = '-';
	nbrstr[*size] = 0;
	return (nbrstr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	nbr_int;
	char		*nbrstr;
	int			tolen;
	int			size;

	size = 0;
	tolen = 0;
	if (isbav(base_from) && isbav(base_to))
	{
		nbr_int = ft_atoi_base(nbr, base_from);
		while (base_to[tolen])
			tolen++;
		nbrstr = ft_strmal(tolen, nbr_int, &size);
		if (!nbrstr)
			return (0);
		if (nbr_int < 0)
			nbr_int *= -1;
		nbrstr = ft_conv(size, nbrstr, base_to, nbr_int);
		return (nbrstr);
	}
	else
		return (0);
}
