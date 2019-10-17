/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:43:35 by marvin            #+#    #+#             */
/*   Updated: 2019/09/30 22:01:48 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] == c)
		i++;
	if (i == 0 && s[i] != '\0')
		k++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c && i != 0)
			k++;
		i++;
	}
	return (k);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	l;

	l = 0;
	while (s[l] && s[l] != c)
		l++;
	return (l);
}

static char		**ft_free(char **str, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(str[j]);
		j++;
	}
	free(str);
	return (NULL);
}

static char		*ft_write(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[j])
		j++;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	k;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	k = ft_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (k + 1))))
		return (NULL);
	while (i < k)
	{
		while (*s == c && *s != '\0')
			s++;
		str[i] = (char *)malloc(sizeof(char) * (ft_wordlen(s, c) + 1));
		if (!str[i])
			return (ft_free(str, i));
		str[i] = ft_write(str[i], s, ft_wordlen(s, c));
		i++;
		while (*s != c)
			s++;
	}
	str[i] = (char *)malloc(sizeof(char));
	str[i] = NULL;
	return (str);
}
