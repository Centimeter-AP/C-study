/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:21:11 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/02 11:48:17 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_l;
	unsigned int	i;
	unsigned int	dest_l;

	dest_l = 0;
	src_l = 0;
	while (dest[dest_l])
		dest_l++;
	while (src[src_l])
		src_l++;
	if (dest_l + 1 <= size)
	{
		i = dest_l;
		while (*src && i + 1 < size)
		{
			dest[i] = *src;
			src++;
			i++;
		}
		dest[i] = 0;
		return (src_l + dest_l);
	}
	else
		return (src_l + size);
}
