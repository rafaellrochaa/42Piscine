/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:03:26 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 13:03:26 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p_i;
	int	c;

	if (min >= max)
		return (NULL);
	p_i = malloc(sizeof(int) * (max - min));
	if (!p_i)
		return (NULL);
	c = 0;
	while (c < max - min)
	{
		p_i[c] = min + c;
		c++;
	}
	return (p_i);
}

//#include <stdio.h>
//int main(void)
//{
//	int min = -500;
//	int max = 500;
//	int pos;
//	int *result;

//	result = ft_range(min, max);
//	pos = 0;
//	if (result)
//	{
//		printf("Conteúdo do array:\n");
//		while (pos < max -min)
//			printf("%d ", result[pos++]);
//		printf("\n");
//		free(result);
//	}
//	else printf("Erro: min >= max ou falha na alocação de memória.\n");

//	return (0);
//}