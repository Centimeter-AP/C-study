/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:07:05 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/09/16 06:25:54 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srce;
	size_t			i;

	dest = (unsigned char *)dst;
	srce = (unsigned char *)src;
	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	while (n - i > 0)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}
