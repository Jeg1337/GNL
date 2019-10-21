/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:22:02 by dnigella          #+#    #+#             */
/*   Updated: 2019/10/21 19:11:11 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void			ft_asd(char *buf, int j, char **qwe)
{
	int				i;

	i = 0;
	while (buf[j] != '\0')
		qwe[i++] = buf[j++];
	qwe[i] = '\0';
}

static void			ft_qwe(char *buf, char **qwe, char **line)
{
	int				i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	if (buf[i] == '\n')
	{
		ft_strlcat(line, buf, i);
		line[i] = '\0';
		ft_asd(buf, ++i, &qwe);
	}
}

int					get_next_line(const int fd, char **line)
{
	static char		qwe[BUFF_SIZE];
	int				ret;
	char			buf[BUFF_SIZE + 1];

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_qwe(buf, &qwe, line);
		
	}
}
