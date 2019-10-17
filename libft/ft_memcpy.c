/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:16:43 by marvin            #+#    #+#             */
/*   Updated: 2019/09/30 20:35:08 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t			i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < num)
	{
		((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
		i++;
	}
	return (dest);
}
