/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_output.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:30:13 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/21 22:24:18 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_square(char num)
{
	write(1, "| ", 2);
	write(1, &num, 1);
	write(1, " ", 1);
}

void	print_col_clues(int *clues, char direction)
{
	int		pos;
	int		max_pos;
	char	clue;

	pos = 0;
	max_pos = 3;
	if (direction != 'u')
	{
		pos = 4;
		max_pos = 7;
	}
	while (pos <= max_pos)
	{
		if (pos != (max_pos - 3))
			write(1, "   ", 3);
		else
			write(1, "    ", 4);
		clue = clues[pos++] + '0';
		write(1, &clue, 1);
	}
	write(1, "\n", 1);
}

void	print_row_clues(int *clues, int current_line, char direction)
{
	int		max_pos_to_row;
	int		pos_clue;
	char	clue;

	pos_clue = current_line + 8;
	max_pos_to_row = 11;
	if (direction != 'l')
	{
		pos_clue = current_line + 12;
		max_pos_to_row = 15;
	}
	if (pos_clue <= max_pos_to_row)
	{
		write(1, " ", 1);
		clue = clues[pos_clue++] + '0';
		write(1, &clue, 1);
	}
}

void	print_puzzle(int solved_puzzle[4][4], int clues[16])
{
	int		pz_line;
	int		pz_pos_in_current_line;
	char	num;

	pz_line = 0;
	print_col_clues(clues, 'u');
	write(1, "  -----------------\n", 20);
	while (pz_line < 4)
	{
		print_row_clues(clues, pz_line, 'l');
		pz_pos_in_current_line = 0;
		while (pz_pos_in_current_line < 4)
		{
			num = solved_puzzle[pz_line][pz_pos_in_current_line] + '0';
			print_square(num);
			pz_pos_in_current_line++;
		}
		write(1, "|", 1);
		print_row_clues(clues, pz_line, 'r');
		write(1, "\n", 1);
		write(1, "  -----------------", 19);
		pz_line++;
		write(1, "\n", 1);
	}
	print_col_clues(clues, 'd');
}
