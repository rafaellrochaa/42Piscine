/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:19:09 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/17 22:19:11 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	pos;
	int	temp;

	index = 0;
	while (index <= size)
	{
		pos = 0;
		while (pos < size)
		{
			if (tab[pos] > tab[pos + 1])
			{
				temp = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = temp;
			}
			pos++;
		}
		index++;
	}
}
// int main(void) 
// {
// 	int tab[] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
// 	ft_sort_int_tab(tab, 15);
// 	return (0);
// }
