/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 03:21:17 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/02 11:49:17 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	size = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[size] && size < nb)
	{
		dest[i] = src[size];
		i++;
		size++;
	}
	dest[i] = 0;
	return (dest);
}
