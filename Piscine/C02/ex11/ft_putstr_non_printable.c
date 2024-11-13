/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:26:26 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/02 14:58:48 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str > 31 && *str < 127)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[(unsigned char)*str / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char)*str % 16], 1);
		}
		str++;
	}
}
