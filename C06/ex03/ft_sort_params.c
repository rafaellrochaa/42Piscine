/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c1                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:52:34 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 08:52:34 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**ft_sort_params(char **asc_str, int size)
{
	char	*aux;
	int		c1;
	int		c2;

	c1 = 0;
	while (c1 < size - 1)
	{
		c2 = 0;
		while (c2 < size - 1)
		{
			if (ft_strcmp(asc_str[c2], asc_str[c2 + 1]) > 0)
			{
				aux = asc_str[c2];
				asc_str[c2] = asc_str[c2 + 1];
				asc_str[c2 + 1] = aux;
			}
			c2++;
		}
		c1++;
	}
	return (asc_str);
}

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc > 1)
	{
		argv++;
		ft_sort_params(argv, argc - 1);
		while (c < argc - 1)
		{
			ft_putstr(argv[c]);
			write(1, "\n", 1);
			c++;
		}
	}
}
