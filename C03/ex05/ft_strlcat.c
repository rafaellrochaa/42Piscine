/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:30:40 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/24 08:30:47 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	pos_src;
	unsigned int	pos_dest;
	unsigned int	count_src;
	unsigned int	count_dest;

	pos_src = 0;
	pos_dest = 0;
	count_src = 0;
	count_dest = 0;
	while (src[count_src] != '\0')
		count_src++;
	while (dest[count_dest] != '\0')
		count_dest++;
	pos_dest = count_dest;
	if (size == 0 || size <= count_dest)
		return (count_src + size);
	while (src[pos_src] != '\0' && pos_src < size - count_dest - 1)
	{
		dest[pos_dest] = src[pos_src];
		pos_dest++;
		pos_src++;
	}
	dest[pos_dest] = '\0';
	return (count_src + count_dest);
}

//int main() {
//    char dest[50] = "Hello, ";
//    char *src = "world!";
//	int size = sizeof(dest);
//	printf("<====================ft_strlcat======================>\n");
//	printf("comprimento inicial do ponteiro dest: %d\n", size);
//	printf("calling ft_strlcat(\"%s\", \"%s\", %d)\n", dest, src, size);
//    size_t result = ft_strlcat(dest, src, size);
//    printf("Resultado: %s (comprimento: %zu)\n", dest, result);

//    printf("\n<====================strlcat======================>\n");
//	char dest2[50] = "Hello, ";
//    char *src2 = "world!";
//	int size2 = sizeof(dest2);
//	printf("comprimento inicial do ponteiro dest: %d\n", size2);
//	printf("calling ft_strlcat(\"%s\", \"%s\", %d)\n", dest2, src2, size2);
//    size_t result2 = strlcat(dest2, src2, size2);
//    printf("Resultado: %s (comprimento: %zu)\n", dest2, result2);
//    return (0);
//}