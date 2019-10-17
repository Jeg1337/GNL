/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:58:12 by marvin            #+#    #+#             */
/*   Updated: 2019/09/30 19:42:27 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t q;

	i = 0;
	j = 0;
	q = ft_strlen(src);
	while (dst[i] != '\0' && i < size)
		i = i + 1;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j = j + 1;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + q);
}
