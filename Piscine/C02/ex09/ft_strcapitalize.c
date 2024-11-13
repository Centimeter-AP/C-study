/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:00:49 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/05/31 16:24:19 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ischar(char *str)
{
	while (*str)
	{
		if ((*str >= '0' && *str <= '9')
			|| (*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z'))
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 'a' - 'A';
			str++;
			while ((*str >= '0' && *str <= '9')
				|| (*str >= 'A' && *str <= 'Z')
				|| (*str >= 'a' && *str <= 'z'))
			{
				if (*str >= 'A' && *str <= 'Z')
					*str += 'a' - 'A';
				str++;
			}
		}
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;

	temp = str;
	ft_ischar(str);
	return (temp);
}
