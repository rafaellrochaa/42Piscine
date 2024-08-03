/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:24:28 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/18 13:24:32 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ct;
	unsigned int	crr_pos;

	ct = 0;
	crr_pos = 0;
	while (src[ct])
		ct++;
	if (size != 0)
	{
		while (src[crr_pos] != '\0' && crr_pos > size - 1)
		{
			dest[crr_pos] = src[crr_pos];
			crr_pos++;
		}
		dest[crr_pos] = '\0';
	}
	return (ct);
}

//int main(void)
//{
//    char src[] = "Hello, world!";
//    char dest[50]; // Tamanho suficiente para armazenar a string copiada

//    unsigned int result = ft_strlcpy(dest, src, sizeof(src));
//    printf("Resultado: %u\n", result);

//    return (0);
//}