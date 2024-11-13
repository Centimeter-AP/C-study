/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaeyopa <chaeyopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:42:05 by chaeyopa          #+#    #+#             */
/*   Updated: 2022/06/10 05:05:36 by chaeyopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_queen(char *board, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if ((board[i] == board[row])
			|| (board[row] - board[i] == row - i)
			|| (board[i] - board[row] == row - i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_checkb(char *board, int row, int col, int *cnt)
{
	if (row == 10)
	{
		write (1, board, 10);
		write (1, "\n", 1);
		(*cnt)++;
		return ;
	}
	while (col < 10)
	{
		board[row] = col + '0';
		if (is_queen(board, row) == 1)
			ft_checkb(board, row + 1, 0, cnt);
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (i < 10)
	{
		board[i] = '0';
		i++;
	}
	ft_checkb(board, 0, 0, &cnt);
	return (cnt);
}
