/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:27:07 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/15 12:27:11 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha_rev;

	alpha_rev = 'z';
	while (alpha_rev >= 'a')
	{
		write(1, &alpha_rev, 1);
		alpha_rev--;
	}
}
