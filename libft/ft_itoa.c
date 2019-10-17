/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:51:26 by marvin            #+#    #+#             */
/*   Updated: 2019/09/30 21:45:42 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_min(int n)
{
	char	*str;

	if (n != 1)
		return (NULL);
	str = (char *)malloc(sizeof(char) * 12);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static char	*ft_null(int a)
{
	char	*str;

	if (!a)
		return (NULL);
	str = (char *)malloc(sizeof(char) * 2);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char	*ft_write(int a, size_t k, int n, int q)
{
	char	*str;

	while (a > 0)
	{
		a = a / 10;
		k++;
	}
	str = (char *)malloc(sizeof(char) * (k + 1));
	if (!str)
		return (NULL);
	str[k] = '\0';
	while (n > 0)
	{
		str[--k] = n % 10 + '0';
		n = n / 10;
	}
	if (q == 1)
		str[0] = '-';
	return (str);
}

char		*ft_itoa(int n)
{
	int		a;
	size_t	k;
	int		q;

	k = 0;
	q = 0;
	if (n == -2147483648)
		return (ft_min(1));
	if (n < 0)
	{
		k++;
		n = n * (-1);
		q = 1;
	}
	a = n;
	if (n == 0)
		return (ft_null(1));
	return (ft_write(a, k, n, q));
}
