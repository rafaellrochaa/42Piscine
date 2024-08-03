/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:05:37 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/17 19:05:40 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_b;

	temp_b = *b;
	*b = *a % *b;
	*a = *a / temp_b;
}

// int	main(void) 
// {
// 	int	*a;
// 	int	*b;
// 	int	val_a;
//     int	val_b;

//  	a = &val_a;
//     b = &val_b;
// 	val_a = 10;
// 	val_b = 2;

//     ft_ultimate_div_mod(a, b);
// 	printf("\nvalor da divisao 10 %% 2 armazenado em a: %d", *a);
// 	printf("\nresto da divisao 10 %% 2 armazenado em b: %d",  *b);
// 	*a = 10;
// 	*b = 3;
// 	ft_ultimate_div_mod(a, b);
// 	printf("\nvalor da divisao 10 %% 3 armazenado em a: %d", *a);
// 	printf("\nresto da divisao 10 %% 3 armazenado em b: %d\n", *b);
// return (0);
// }