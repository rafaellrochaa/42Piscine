/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:05:07 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 22:53:39 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

//#include <stdio.h>
//int main() {
//    int base, expoente, resultado;
//
//    // Teste 1
//    base = 2;
//    expoente = 3;
//    resultado = ft_recursive_power(base, expoente);
//    printf("Teste 1: %d^%d = %d\n", base, expoente, resultado);
//
//    // Teste 2
//    base = 5;
//    expoente = 0;
//    resultado = ft_recursive_power(base, expoente);
//    printf("Teste 2: %d^%d = %d\n", base, expoente, resultado);
//
//    // Teste 3
//    base = 3;
//    expoente = 4;
//    resultado = ft_recursive_power(base, expoente);
//    printf("Teste 3: %d^%d = %d\n", base, expoente, resultado);
//
//    // Teste 4
//    base = 7;
//    expoente = 2;
//    resultado = ft_recursive_power(base, expoente);
//    pr//intf("Teste 4: %d^%d = %d\n", base, expoente, resultado);
//
//    return 0;
//}