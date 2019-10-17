/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:35:39 by dnigella          #+#    #+#             */
/*   Updated: 2019/09/30 20:33:13 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t num)
{
	unsigned char	buf[num];

	if (num > 1048576)
		return (NULL);
	if (source == NULL && dest == NULL)
		return (NULL);
	ft_memcpy((void*)buf, source, num);
	ft_memcpy(dest, (void*)buf, num);
	return (dest);
}
