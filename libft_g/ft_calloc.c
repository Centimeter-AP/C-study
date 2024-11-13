/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:25:45 by marvin            #+#    #+#             */
/*   Updated: 2022/09/16 07:30:10 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	memory;
	void	*res;	

	memory = count * size;
	res = (char *)malloc(memory);
	if (!res)
		return (NULL);
	ft_bzero(res, memory);
	return (res);
}
