/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 03:35:49 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/02 23:19:56 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && str[i])
		{
			i++;
			if (to_find[i] == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
