/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:24:28 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/18 13:24:32 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*init;

	init = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (init);
}

//int	main(void)
//{
//	char test1[] = "hello, World!";
//	char test2[] = "AbCdEfG";
//	char test3[] = "12345";

//	// Teste 1
//	printf("Teste 1:\n");
//	printf("Entrada: \"%s\"\n", test1);
//	ft_strupcase(test1);
//	printf("Saída esperada: \"HELLO, WORLD!\"\n");
//	printf("Saída atual: \"%s\"\n\n", test1);

//	// Teste 2
//	printf("Teste 2:\n");
//	printf("Entrada: \"%s\"\n", test2);
//	ft_strupcase(test2);
//	printf("Saída esperada: \"ABCDEFG\"\n");
//	printf("Saída atual: \"%s\"\n\n", test2);

//	// Teste 3 (não há letras minúsculas)
//	printf("Teste 3:\n");
//	printf("Entrada: \"%s\"\n", test3);
//	ft_strupcase(test3);
//	printf("Saída esperada: \"%s\"\n", test3); // Não deve ter alterações
//	printf("Saída atual: \"%s\"\n", test3);

//	return (0);
//}