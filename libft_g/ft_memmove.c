/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:55:54 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/09/16 06:26:37 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*srce;
	size_t			i;

	i = 0;
	if (len == 0 || dst == src)
		return (dst);
	if (dst < src)
	{
		dest = (unsigned char *)dst;
		srce = (unsigned char *)src;
		while (len--)
			*dest++ = *srce++;
	}
	else
	{
		dest = (unsigned char *)dst + (len - 1);
		srce = (unsigned char *)src + (len - 1);
		while (len--)
			*dest-- = *srce--;
	}
	return (dst);
}
