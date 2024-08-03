/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:24:28 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/18 13:24:32 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//
//int	ft_size(char *str)
//{
//	int size = 0;
//
//	while (*str++)
//		size++;
//	return size;
//}
//
char	*ft_strcpy(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}
//
//int	main(int argc, char **argv)
//{
//	char *src;
//	char *dest;
///
//	if(argc != 2)
//	{
//		write(1, "Error: Invalid argument.", 1);
//	}
//
//	src = argv[1];
//	dest = malloc(ft_size(src) + 1);
//	ft_strcpy(dest, src);
//
//	printf("Teste 1: original: %s\n", src);
//	printf("Addr memo original: %p\n", &src);
//	printf("Teste 1: Copiado: %s\n", dest);
//	printf("Addr memo copiado: %p\n", &dest);
//
//	free(dest);
//	return (0);
//}
