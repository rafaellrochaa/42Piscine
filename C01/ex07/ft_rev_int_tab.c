/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:29:14 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/17 20:29:19 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < size)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[index];
		tab[index] = temp;
		index++;
		size--;
	}
}
// int main(void) 
// {
// 	int tab[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
// 	ft_rev_int_tab(tab, 15);
// }