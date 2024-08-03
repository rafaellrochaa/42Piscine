/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:40:42 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 22:52:49 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power-- > 1)
		result *= nb;
	return (result);
}

//#include <stdio.h>
//int main() {
//    int base, expoente, resultado;
//
//    // Teste 1
//    base = 2;
//    expoente = 3;
//    resultado = ft_iterative_power(base, expoente);
//    printf("Teste 1: %d^%d = %d\n", base, expoente, resultado);
//
//    // Teste 2
//    base = 5;
//    expoente = 0;
//    resultado = ft_iterative_power(base, expoente);
//    printf("Teste 2: %d^%d = %d\n", base, expoente, resultado);
//
//    // Teste 3
//    base = 3;
//    expoente = 4;
//    resultado = ft_iterative_power(base, expoente);
//    printf("Teste 3: %d^%d = %d\n", base, expoente, resultado);
//
//    // Teste 4
//    base = 7;
//    expoente = 2;
//    resultado = ft_iterative_power(base, expoente);
//    printf("Teste 4: %d^%d = %d\n", base, expoente, resultado);
//
//    return 0;
//}