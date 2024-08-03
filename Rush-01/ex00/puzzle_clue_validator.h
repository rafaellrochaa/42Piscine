/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_clue_validator.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:30:13 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/21 22:24:18 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_CLUE_VALIDATOR_H
# define PUZZLE_CLUE_VALIDATOR_H

void	fill_line(int *current_seq, int puzzle[4][4], int idx_seq, int reverse);
void	fill_column(int *current_seq, int puzzle[4][4], int idx_seq, int rev);
int		check_seq(int *current_seq, int *clues, int clue_index);

#endif
