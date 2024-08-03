/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrielma's group <adrielma@student.42.fr>   +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:15:10 by adrielma          #+#    #+#             */
/*   Updated: 2024/07/14 14:20:46 by laalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void	draw_rect(int row, int pos, int lst_pos, int lst_row);

void	draw_rect(int row, int pos, int lst_pos, int lst_row)
{
	if (row == 1 && pos == 1)
		ft_putchar('/');
	else if ((row == 1 && pos == lst_pos) || (row == lst_row && pos == 1))
		ft_putchar('\\');
	else if (row == lst_row && pos == lst_pos)
		ft_putchar('/');
	else if ((row > 1 && row < lst_row) && (pos == 1 || pos == lst_pos))
		ft_putchar('*');
	else if ((row == 1 || row == lst_row) && (pos > 1 && pos < lst_pos))
		ft_putchar('*');
	else if ((row > 1 && row < lst_row) && (pos > 1 && pos < lst_pos))
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	pos;
	int	row;
	int	lst_pos;
	int	lst_row;

	row = 1;
	lst_pos = x;
	lst_row = y;
	while (row <= lst_row && lst_pos > 0)
	{
		pos = 1;
		while (pos <= lst_pos)
		{
			draw_rect(row, pos, lst_pos, lst_row);
			pos++;
		}
		ft_putchar('\n');
		row++;
	}
}
