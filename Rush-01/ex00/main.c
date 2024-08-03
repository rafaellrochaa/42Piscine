/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:30:13 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/21 22:24:18 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle_validator.h"
#include "puzzle_output.h"

int	char_to_int(char str)
{
	return (str - '0');
}

int	input_validation(int argc, char **argv)
{
	int	pos;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	pos = 0;
	while (pos < 16)
	{
		if (argv[argc - 1][pos] < '1' || argv[argc - 1][pos] > '4')
		{
			ft_putstr("Error\n");
			return (0);
		}
		pos++;
	}
	return (1);
}

void	init_puzzle(int puzzle[4][4])
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			puzzle[r][c] = 0;
			c++;
		}
		r++;
	}
}

int	main(int argc, char **argv)
{
	int	puzzle[4][4];
	int	clues[16];
	int	index_clue;

	if (!input_validation(argc, argv))
		return (1);
	index_clue = 0;
	while (index_clue < 16)
	{
		clues[index_clue] = char_to_int(argv[argc - 1][index_clue]);
		index_clue++;
	}
	init_puzzle(puzzle);
	if (solve(puzzle, clues, 0, 0))
		print_puzzle(puzzle, clues);
	else
		ft_putstr("Error\n");
	return (0);
}
