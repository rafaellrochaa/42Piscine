/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:00:54 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/25 02:00:59 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	strscmp;

	strscmp = 0;
	while (n > strscmp && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		strscmp++;
	}
	return (0);
}

//int main(int argc, char **argv)
//{
//    argc = argc + 0;
//    printf("new imp: %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
//    printf("original imp: %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
//    return 0;
//}