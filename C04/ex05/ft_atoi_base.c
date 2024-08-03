/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:31:21 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 23:23:00 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_index(char *base, char c)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	check_repeat_c(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			count++;
		str++;
	}
	return (count);
}

int	check_base(char *base)
{
	int	i;
	int	count;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		count = check_repeat_c(base, base[i]);
		if (count > 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;

	if (check_base(base))
	{
		res = 0;
		sign = 1;
		while ((*str >= 9 && *str <= 13) || *str == ' ')
			str++;
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign = -sign;
			str++;
		}
		while (get_index(base, *str) >= 0)
		{
			res = res * ft_strlen(base) + get_index(base, *str);
			str++;
		}
		return (res * sign);
	}
	return (0);
}

//#include <stdio.h>
//int main() {
//    char *number = "1010"; // Número em formato de string
//    char *base = "01";     // Base binária
//
//    int result = ft_atoi_base(number, base);
//
//    printf("Resultado: %d\n", result);
//
//    return 0;
//}