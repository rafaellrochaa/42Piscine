/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:54:35 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 12:54:35 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		pos;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	pos = 0;
	while (src[pos])
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}

//#include <stdio.h>
//int main() {
//    char *original = "Hello, world!";
//    char *copia = ft_strdup(original);

//    if (copia) {
//        printf("Original: %s\n", original);
//        printf("Cópia: %s\n", copia);
//        free(copia);
//		copia = NULL;
//    } else {
//        printf("Erro ao alocar memória.\n");
//    }

//    return 0;
//}