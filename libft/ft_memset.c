/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 23:45:00 by dnigella          #+#    #+#             */
/*   Updated: 2019/09/30 19:30:04 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t len)
{
	size_t			i;
	unsigned char	*c;

	c = (unsigned char *)memptr;
	i = 0;
	while (i < len)
		c[i++] = (unsigned char)val;
	return (memptr);
}
