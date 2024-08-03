/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:12:28 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 23:03:23 by rrocha-b         ###   ########.fr       */
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

//#include <stdio.h>
//int main() 
//{
//    int number;
//
//    // Solicita ao usuário um número para verificar se é primo
//    printf("Digite um número: ");
//    scanf("%d", &number);
//
//    // Chama a função ft_is_prime e armazena o resultado
//    int result = ft_is_prime(number);
//    
//    // Exibe o resultado
//    if (result) {
//        printf("%d é um número primo.\n", number);
//    } else {
//        printf("%d não é um número primo.\n", number);
//    }
//}