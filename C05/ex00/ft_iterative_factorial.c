/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:30:53 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 23:01:32 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb < 0)
		return (0);
	i = 1;
	f = 1;
	while (i <= nb)
	{
		f *= i;
		i++;
	}
	return (f);
}

//#include <stdio.h>
//int main() {
//    int num;
//   
//    // Testando a função com diferentes valores
//    num = 5;
//    printf("Fatorial de %d é %d\n", num, ft_iterative_factorial(num));
//    
//    num = 0;
//    printf("Fatorial de %d é %d\n", num, ft_iterative_factorial(num));
//   
//    num = -3;
//    printf("Fatorial de %d é %d\n", num, ft_iterative_factorial(num));
//  
//    num = 10;
//    printf("Fatorial de %d é %d\n", num, ft_iterative_factorial(num));
//    
//    return 0;
//}