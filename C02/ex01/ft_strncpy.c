/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:24:28 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/18 13:24:32 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
//int ft_size(char **str)
//{
//	int size = 0;

//	while(str[2][size])
//		size++;
//	return (size);
//}

//int ft_pow(int base, int exp)
//{
//	int rs = 1;
//	while(exp > 0)
//	{
//		rs *= base;
//		exp--;
//	}
//	return (rs);
//}

//int char_to_int(char **nm_str)
//{
//	int num;
//	int pos;
//	int decimals;

//	num = 0;

//	pos = 0;
//	decimals = ft_size(nm_str);

//	while(nm_str[2][pos])
//	{

//		if(decimals > 1)
//			num += (nm_str[2][pos] - '0') * (ft_pow(10, decimals-1));
//		else num += (nm_str[2][pos] - '0');
//		pos++;
//	}
//	return (num);
//}

//int main(int argc, char **argv)
//{
//	char *dest;
//	char *src;
//	unsigned int n;

//	if (argc != 3)
//	{
//		printf("Invalid arguments");
//		return (1);
//	}

//	src = argv[1];
//	n = char_to_int(argv);
//	dest = malloc(n + 1);
//	printf("copied string = %s", ft_strncpy(dest, src, n));
//	free(dest);

//	return (0);
//}