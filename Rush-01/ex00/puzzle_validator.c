/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_validator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:30:13 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/21 22:24:18 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle_clue_validator.h"

int	check_clues(int puzzle[4][4], int *clues)
{
	int	sequence_to_check[4];
	int	index_seq;

	index_seq = 0;
	while (index_seq < 4)
	{
		fill_line(sequence_to_check, puzzle, index_seq, 0);
		if (!check_seq(sequence_to_check, clues, index_seq + 8))
			return (0);
		fill_column(sequence_to_check, puzzle, index_seq, 0);
		if (!check_seq(sequence_to_check, clues, index_seq))
			return (0);
		fill_line(sequence_to_check, puzzle, index_seq, 1);
		if (!check_seq(sequence_to_check, clues, index_seq + 12))
			return (0);
		fill_column(sequence_to_check, puzzle, index_seq, 1);
		if (!check_seq(sequence_to_check, clues, index_seq + 4))
			return (0);
		index_seq++;
	}
	return (1);
}

int	is_valid(int puzzle[4][4], int row, int col, int num)
{
	int	pos;

	pos = 0;
	while (pos < 4)
	{
		if (puzzle[row][pos] == num || puzzle[pos][col] == num)
			return (0);
		pos++;
	}
	return (1);
}

int	solve(int puzzle[4][4], int *clues, int row, int col)
{
	int	possible_value;

	if (row == 4)
		return (check_clues(puzzle, clues));
	if (col == 4)
		return (solve(puzzle, clues, row + 1, 0));
	possible_value = 1;
	while (possible_value <= 4)
	{
		if (is_valid(puzzle, row, col, possible_value))
		{
			puzzle[row][col] = possible_value;
			if (solve(puzzle, clues, row, col + 1))
				return (1);
			puzzle[row][col] = 0;
		}
		possible_value++;
	}
	return (0);
}
