/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:35:17 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 23:02:13 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}

//#include <stdio.h>
//int main() {
//    int num;
//    
//    // Testando a função com diferentes valores
//    num = 5;
//    printf("Fatorial de %d é %d\n", num, ft_recursive_factorial(num));
//    
//    num = 0;
//    printf("Fatorial de %d é %d\n", num, ft_recursive_factorial(num));
//    
//    num = -3;
//    printf("Fatorial de %d é %d\n", num, ft_recursive_factorial(num));
//    
//    num = 10;
//    printf("Fatorial de %d é %d\n", num, ft_recursive_factorial(num));
//    
//    return 0;
//}