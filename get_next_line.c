/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:46:30 by marvin            #+#    #+#             */
/*   Updated: 2019/10/09 20:40:38 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		ft_write(char *buf, char *str)
{
	int		i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			str[i] = '\0';
			break ;
		}
		str[i] = buf[i];
		i++;
	}
}

int				get_next_line(const int fd, char **line)
{
	static int	k = 0;
	int			ret;
	char		buf[BUFF_SIZE];

	if (BUFF_SIZE < 1)
		return (-1);
	if (!(line[k] = (char *)malloc(sizeof(char) * 12000)))
		return (0);
	ret = read(fd, buf, BUFF_SIZE - 1);
	buf[ret] = '\0';
	if (ret == 0)
		return (0);
	while (ret == read(fd, buf, BUFF_SIZE - 1))
	{
		buf[ret] = '\0';
		ft_write(buf, line[k]);
		line[k] = line[k] + ret;
	}
	k++;
	return (1);
}
