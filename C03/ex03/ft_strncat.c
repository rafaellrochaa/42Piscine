/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:29:49 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/25 03:27:12 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	pos_source;
	unsigned int	pos_destination;

	pos_source = 0;
	pos_destination = 0;
	while (dest[pos_destination])
		pos_destination++;
	while (src[pos_source] && pos_source < nb)
	{
		dest[pos_destination] = src[pos_source];
		pos_destination++;
		pos_source++;
	}
	dest[pos_destination] = '\0';
	return (dest);
}

//int main(int argc, char **argv)
//{
//	argc = argc + 0;	
//	printf("Palavra 1 = \"%s\"\n", argv[1]);
//	printf("Palavra 2 = \"%s\"\n", argv[2]);
//	printf("quero usar somente \"%d\" letras da palavra 2\n", atoi(argv[3]));
//printf("\ft_strncat = \"%s\"",  ft_strncat(argv[1], argv[2], atoi(argv[3])));
//    return (0);
//}