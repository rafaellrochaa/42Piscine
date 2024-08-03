/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:24:28 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/18 13:24:32 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

//int	main (int argc, char **argv)
//{
//	if (argc < 2)
//	{
//		write(1, "Invalid arguments", 17);
//	}

//	int is_numeric = ft_str_is_numeric(argv[1]);
//	char is_numeric_c = is_numeric + '0';
//	write(1, &is_numeric_c, 1);
//	return (0);	
//}