/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:05:18 by dnigella          #+#    #+#             */
/*   Updated: 2019/09/30 19:33:30 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, int counter)
{
	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	l;

	l = 0;
	i = 0;
	j = 0;
	l = ft_count(s2, l);
	i = ft_count(s1, i);
	if (l == 0)
		return ((char *)s1);
	if (i < l)
		return (NULL);
	l = i - l;
	while (s1 && j <= l)
	{
		i = 0;
		while (s1[i] == s2[i] && s2[i])
			i++;
		if (s2[i] == '\0' && i != 0)
			return ((char *)s1);
		s1++;
		j++;
	}
	return (NULL);
}
