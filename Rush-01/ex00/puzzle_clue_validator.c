/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_clue_validator.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:30:13 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/21 22:24:18 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_line(int *current_seq, int puzzle[4][4], int idx_seq, int reverse)
{
	int	pos_in_seq;

	pos_in_seq = 0;
	while (pos_in_seq < 4)
	{
		if (reverse)
			current_seq[pos_in_seq] = puzzle[idx_seq][3 - pos_in_seq];
		else
			current_seq[pos_in_seq] = puzzle[idx_seq][pos_in_seq];
		pos_in_seq++;
	}
}

void	fill_column(int *current_seq, int puzzle[4][4], int idx_seq, int rev)
{
	int	pos_in_seq;

	pos_in_seq = 0;
	while (pos_in_seq < 4)
	{
		if (rev)
			current_seq[pos_in_seq] = puzzle[3 - pos_in_seq][idx_seq];
		else
			current_seq[pos_in_seq] = puzzle[pos_in_seq][idx_seq];
		pos_in_seq++;
	}
}

int	count_visible_buildings(int *current_seq)
{
	int	count;
	int	pos;
	int	max_height;

	count = 0;
	pos = 0;
	max_height = 0;
	while (pos < 4)
	{
		if (current_seq[pos] > max_height)
		{
			max_height = current_seq[pos];
			count++;
		}
		pos++;
	}
	return (count);
}

int	check_seq(int *current_seq, int *clues, int clue_index)
{
	if (count_visible_buildings(current_seq) != clues[clue_index])
		return (0);
	return (1);
}
