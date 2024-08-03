/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:31:09 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/26 21:05:27 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_str(char str)
{
	write(1, &str, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr_l;

	nbr_l = nb;
	if (nbr_l < 0)
	{
		write(1, "-", 1);
		nbr_l *= -1;
	}
	if (nbr_l / 10 > 0)
		ft_putnbr(nbr_l / 10);
	ft_put_str((nbr_l % 10) + '0');
}

//int main(int argc, char ** argv)
//{
//	int nbr;

//	nbr = 0;
//	if (argc >= 2)
//	{
//		nbr = atoi(argv[1]);
//		ft_putnbr(nbr);
//	}

//	return (0);
//}