/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:05:27 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/17 20:05:29 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (0);
	}
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

// int main (void)
// {
// 	char *msg;
// 	int count;

// 	msg = "\nHello world\n";
// 	count = ft_strlen(msg);
// 	printf("\ncount: %d", count);
// 	return (0);
// }
