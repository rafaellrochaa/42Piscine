/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:30:59 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/26 20:41:54 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

//int main()
//{
//    char str1[] = "Hello, world!";
//    char str2[] = "This is a test string.";
//    char str3[] = "";

//    printf("Length of str1: %d\n", ft_strlen(str1));
//    printf("Length of str2: %d\n", ft_strlen(str2));
//    printf("Length of str3: %d\n", ft_strlen(str3));

//    return (0);
//}
