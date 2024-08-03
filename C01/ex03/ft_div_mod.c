/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:02:43 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/17 19:02:48 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main (void)
// {
//     int *div;
//     int *mod;
//     int result_div;
//     int result_mod;

//     div = &result_div;
//     mod = &result_mod;

//     ft_div_mod(10, 2, div, mod);
//     printf("\n10 %% 2 = %d\n", *div);
//     printf("\n10 %% 2 resta %d\n", *mod);
//     ft_div_mod(10, 3, div, mod);
//     printf("\n10 %% 3 = %d\n", *div);
//     printf("\n10 %% 3 resta %d\n", *mod);
//     return (0);
// }
