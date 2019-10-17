/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:04:12 by marvin            #+#    #+#             */
/*   Updated: 2019/09/30 19:31:04 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t		i;

	i = 0;
	if (ch == '\0')
	{
		while (*str)
			str++;
		return ((char *)str);
	}
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
