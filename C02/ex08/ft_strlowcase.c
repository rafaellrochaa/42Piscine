/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:24:28 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/18 13:24:32 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	char	*start_pointer_pos;

	start_pointer_pos = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (start_pointer_pos);
}

//int	main(int argc, char **argv)
//{
//	if(argc < 2)
//	{
//		printf("Invalid arguments");
//	}

//	char *my_string;

//	my_string = argv[1];
//	char *result = ft_strlowcase(my_string);

//	printf("Original string: %s\n", my_string);
//	printf("Converted string: %s\n", result);

//	return (0);
//}
