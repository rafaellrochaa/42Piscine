/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:30:34 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 22:54:34 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

//#include <stdio.h>
//int main() {
//    int index;
//    printf("Digite um índice para calcular o Fibonacci: ");
//    scanf("%d", &index);

//    int result = ft_fibonacci(index);
//    printf("Fibonacci de %d é %d\n", index, result);

//    return 0;
//}