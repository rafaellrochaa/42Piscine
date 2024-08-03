/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:01:56 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/25 02:01:59 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

//int main(int argc, char **argv)
//{
//    argc = argc + 0;
//    printf("new imp: %d\n", ft_strcmp(argv[1], argv[2]));
//    printf("original imp: %d\n", strcmp(argv[1], argv[2]));
//    return 0;
//}