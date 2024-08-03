/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrocha-b <rrocha-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:12:25 by rrocha-b          #+#    #+#             */
/*   Updated: 2024/07/30 17:12:25 by rrocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c1;

	c1 = 0;
	while (str[c1])
		c1++;
	return (c1);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	c1;
	int	sep_len;
	int	len;

	c1 = 0;
	sep_len = ft_strlen(sep);
	len = 0;
	while (c1 < size)
	{
		len += ft_strlen(strs[c1]);
		if (c1 < size - 1)
			len += sep_len;
		c1++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	while (dest[c1] != '\0')
		c1++;
	while (src[c2] != '\0')
	{
		dest[c1 + c2] = src[c2];
		c2++;
	}
	dest[c1 + c2] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*txt;
	int		c;
	int		len;

	c = 0;
	len = ft_total_size(size, strs, sep) + 1;
	txt = malloc(sizeof(char) * len);
	if (!txt)
		return (0);
	*txt = 0;
	while (c < size)
	{
		ft_strcat(txt, strs[c]);
		if (c < size - 1)
			ft_strcat(txt, sep);
		c++;
	}
	return (txt);
}

//int	main(void)
//{
//	#include <stdio.h>
//	int	size = 5;
//	char	*strs[] = {"a", "b", "salut", "", "OK"};
//	char	sep[] = "|--|";

//	printf("OUTPUT: %s\n", ft_strjoin(size, strs, sep));
//	return (0);
//}