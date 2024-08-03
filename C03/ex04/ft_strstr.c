/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:30:16 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/26 18:05:16 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int	check_if_values_are_equals(char c1, char c2)
{
	if (c1 == '\0' || c2 == '\0')
		return (0);
	if (c1 == c2)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	pos;
	int	pos_aux;

	pos = 0;
	pos_aux = 0;
	if (str[pos] == '\0' && to_find[pos] != '\0')
		return (0x00);
	if (str[pos] == '\0')
		return (str);
	while (str[pos] != '\0')
	{
		while (check_if_values_are_equals(str[pos + pos_aux], to_find[pos_aux]))
			pos_aux++;
		if (to_find[pos_aux] == '\0')
			return (str + pos);
		pos_aux = 0;
		pos++;
	}
	return (0x00);
}

//int main(int argc, char **argv)
//{
//	argc += 0;
//	ft_strstr(argv[1], argv[2]);
//	//argc = argc + 0;	
//	//printf("Palavra 1 = \"%s\"\n", argv[1]);
//	//printf("Palavra 2 = \"%s\"\n", argv[2]);
//	//printf("\ft_strstr = \"%s\"",  ft_strstr(argv[1], argv[2]));
//	//printf("\n\n");

//	//printf("Palavra 1 = \"%s\"\n", argv[1]);
//	//printf("Palavra 2 = \"%s\"\n", argv[2]);
//	//printf("\ft_strstr = \"%s\"",  strstr(argv[1], argv[2]));
//    return (0);
//}