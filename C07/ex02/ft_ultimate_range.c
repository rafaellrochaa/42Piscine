/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:03:10 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 15:03:10 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	c = 0;
	while (c < max - min)
	{
		(*range)[c] = min + c;
		c++;
	}
	return (max - min);
}

//int main(void)
//{
//	int *arr;
//	int size;

//	// Testando com valores de min = 5 e max = 10
//	size = ft_ultimate_range(&arr, INT_MIN, INT_MAX);
//	if (size == -1)
//	{
//		printf("Erro ao alocar memória.\n");
//		return (1);
//	}
//	else if (size == 0)
//	{
//		printf("Nenhum elemento no intervalo.\n");
//		return (1);
//	}

//	printf("Elementos no intervalo: ");
//	for (int c = 0; c < size; c++)
//	{
//		printf("%d ", arr[c]);
//	}
//	printf("\n");

//	free(arr);
//	return (0);
//}