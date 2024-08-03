/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:31:16 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 23:25:08 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_repeat_c(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			count++;
		str++;
	}
	return (count);
}

int	check_base(char *base)
{
	if (ft_strlen(base) <= 1)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		if (check_repeat_c(base, *base) > 1)
			return (0);
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	if (check_base(base))
	{
		nb = nbr;
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

//#include <stdio.h>
//int main() {
//    // Testando com diferentes bases
//    printf("Decimal (base 10): ");
//    ft_putnbr_base(123, "0123456789");
//    printf("\n");
//
//    printf("Binário (base 2): ");
//    ft_putnbr_base(123, "01");
//    printf("\n");
//
//    printf("Hexadecimal (base 16): ");
//    ft_putnbr_base(123, "0123456789ABCDEF");
//    printf("\n");
//
//    printf("Octal (base 8): ");
//    ft_putnbr_base(123, "01234567");
//    printf("\n");
//
//    return 0;
//}