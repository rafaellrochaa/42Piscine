/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:08:15 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 23:02:34 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb <= 1)
		return (0);
	while (c <= nb / c)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

//#include <stdio.h>
//int main() {
//    int number;
//    
//    // Solicita ao usuário um número para encontrar o próximo primo
//    printf("Digite um número: ");
//    scanf("%d", &number);
//    
//    // Chama a função ft_find_next_prime e armazena o resultado
//    int next_prime = ft_find_next_prime(number);
//    
//    // Exibe o resultado
//    printf("O próximo número primo após %d é %d.\n", number, next_prime);
//    
//    return 0;
//}