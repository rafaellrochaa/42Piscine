/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:02:24 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/25 03:08:16 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	pos_dest;
	int	pos_src;

	pos_dest = 0;
	pos_src = 0;
	while (dest[pos_dest])
		pos_dest++;
	while (src[pos_src])
	{
		dest[pos_dest] = src[pos_src];
		pos_dest++;
		pos_src++;
	}
	dest[pos_dest] = '\0';
	return (dest);
}

//int main(int argc, char **argv)
//{
//	argc = argc + 0;	
//	printf("Entrada 1 = \"%s\"\n", argv[1]);
//	printf("Entrada 2 = \"%s\"\n", argv[2]);
//	printf("\nft_strcat = \"%s\"",  ft_strcat(argv[1], argv[2]));
//    return (0);
//}