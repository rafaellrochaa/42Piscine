/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:48:49 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/31 02:28:44 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	c;

	c = 1;
	if (nb > 0)
	{
		while ((c * c) <= nb)
		{
			if (c * c == nb)
				return (c);
			else if (c >= 46341)
				return (0);
			c++;
		}
	}
	return (0);
}

//#include <stdio.h>
//int main() {
//    int test_values[] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, -1, 3, 10};
//    int num_tests = sizeof(test_values) / sizeof(test_values[0]);

//    for (int i = 0; i < num_tests; i++) {
//        int result = ft_sqrt(test_values[i]);
//        printf("ft_sqrt(%d) = %d\n", test_values[i], result);
//    }

//    return 0;
//}
