/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:32:36 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/15 12:32:39 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_nums(char pos1, char pos2, char pos3)
{
	write(1, &pos1, 1);
	write(1, &pos2, 1);
	write(1, &pos3, 1);
	if (pos1 != '7' || pos2 != '8' || pos3 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	pos1;
	char	pos2;
	char	pos3;

	pos1 = '0';
	while (pos1 <= '7')
	{
		pos2 = pos1 + 1;
		while (pos2 <= '8')
		{
			pos3 = pos2 + 1;
			while (pos3 <= '9')
			{
				ft_print_nums(pos1, pos2, pos3);
				pos3++;
			}
			pos2++;
		}
		pos1++;
	}
}
