/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrielma's group <adrielma@student.42.fr>   +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:15:10 by adrielma          #+#    #+#             */
/*   Updated: 2024/07/14 13:40:06 by laalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	write(1, "teste com 5,3\n", 15);
	rush(5, 3);
	write(1, "\n", 2);
	write(1, "teste com 5,1\n", 15);
	rush(5, 1);
	write(1, "\n", 2);
	write(1, "teste com 1,1\n", 15);
	rush(1, 1);
	write(1, "\n", 2);
	write(1, "teste com 1,5\n", 15);
	rush(1, 5);
	write(1, "\n", 2);
	write(1, "teste com 4,4\n", 15);
	rush(4, 4);
	return (0);
}
