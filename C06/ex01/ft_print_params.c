/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:35:44 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 08:35:44 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	c;

	c = 1;
	if (argc > 1)
	{
		while (c < argc)
		{
			ft_putstr(argv[c]);
			write(1, "\n", 1);
			c++;
		}
	}
}
