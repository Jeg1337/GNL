/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:08:28 by marvin            #+#    #+#             */
/*   Updated: 2019/09/30 19:33:15 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_return(const char *str)
{
	while (*str)
		str++;
	return ((char *)str);
}

char		*ft_strrchr(const char *str, int ch)
{
	size_t		i;
	size_t		k;
	int			a;

	k = 0;
	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			k = i;
			a = 1;
		}
		i++;
	}
	while (k-- > 0)
		str++;
	if (ch == '\0')
		return (ft_return(str));
	if (a == 1)
		return ((char *)str);
	return (NULL);
}
