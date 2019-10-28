/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:22:02 by dnigella          #+#    #+#             */
/*   Updated: 2019/10/28 03:24:29 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			azaza(char **qwe, char **line)
{
	size_t			i;
	char			*tmp;

	i = 0;
	while (qwe[i] != '\n' && qwe[i] != '\0')
		i++;
	if (qwe[i] == '\0')
	{
		*line = ft_strdup(qwe[i]);
		free(qwe);
		return (1);
	}
	if (qwe[i] == '\n')
	{
		*line = ft_strsub(qwe, 0, i);
		tmp = ft_strsub(qwe, i + 1, ft_strlen(qwe) - i);
		free(qwe);
		*qwe = ft_strdup(tmp);
		free(tmp);
		return (1);
	}
}

int					get_next_line(const int fd, char **line)
{
	static char		*qwe[256];
	int				ret;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;

	if (fd < 0 || fd > 10240 || !line)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (!qwe[fd])
			qwe[fd] = ft_strnew(1);
		tmp = ft_strjoin(qwe[fd], buf);
		free(qwe[fd]);
		qwe[fd] = tmp;
		if (ft_strchr(qwe[fd], '\n'))
			break ;
	}
	free(tmp);
	if (ret < 0)
		return (-1);
	if (ret == 0 && (qwe[fd][0] == '\0' || (!qwe[fd])))
		return (0);
	return (azaza(qwe[fd], line));
}
