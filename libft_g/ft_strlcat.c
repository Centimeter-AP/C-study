/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:15:41 by marvin            #+#    #+#             */
/*   Updated: 2022/09/15 22:06:18 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen + 1 <= dstsize)
	{
		i = 0;
		while (src[i] && dstlen + i + 1 < dstsize)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = 0;
		return (srclen + dstlen);
	}
	else
		return (srclen + dstsize);
}
