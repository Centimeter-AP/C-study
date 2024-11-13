/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:25:38 by marvin            #+#    #+#             */
/*   Updated: 2022/09/15 21:03:43 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	s_len;
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		f(i, &s[i]);
		++i;
	}
}
