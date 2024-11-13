/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:13:16 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/09/16 00:29:10 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	unsigned char	ch;
	size_t			i;

	i = 0;
	tmp = b;
	ch = c;
	while (i < len)
	{
		tmp[i] = ch;
		i++;
	}
	return (tmp);
}
