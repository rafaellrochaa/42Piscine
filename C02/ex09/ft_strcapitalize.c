/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:24:28 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/18 13:24:32 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_char_is_uppercase(char chr)
{
	if (!(chr >= 'A' && chr <= 'Z'))
		return (0);
	return (1);
}

void	set_lower(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (ft_char_is_uppercase(str[pos]))
			str[pos] += 32;
		pos++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	lst_c;
	char	crr_c;
	int		pos;

	pos = 0;
	set_lower(str);
	lst_c = '\0';
	while (str[pos])
	{
		crr_c = str[pos];
		if (!(lst_c >= 'a' && lst_c <= 'z') && !(lst_c >= '0' && lst_c <= '9'))
			if (crr_c >= 'a' && crr_c <= 'z')
				str[pos] -= 32;
		lst_c = crr_c;
		pos++;
	}
	str[pos] = '\0';
	return (str);
}

//int main(int argc, char **argv) 
//{
//	if (argc != 2)
//	{
//		printf("Invalid arguments");
//	}

//    char *minha_string;

//	minha_string = argv[1];
//    printf("Antes: %s\n", minha_string);
//    ft_strcapitalize(minha_string);
//    printf("Depois: %s\n", minha_string);
//    return (0);
//}