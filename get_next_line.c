/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2019/10/21 17:22:02 by dnigella          #+#    #+#             */
/*   Updated: 2019/11/27 18:52:30 by dnigella         ###   ########.fr       */
=======
/*   Created: 2019/09/20 18:45:02 by dnigella          #+#    #+#             */
/*   Updated: 2019/11/27 21:08:55 by dnigella         ###   ########.fr       */
>>>>>>> 2cbb268... final_blyattttttt
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD
static int			azaza(char **qwe, char **line, int fd)
=======
static int	ft_gnl(char **line, char **arr, const int fd)
>>>>>>> 2cbb268... final_blyattttttt
{
	size_t	i;
	char	*tmp;

	i = 0;
	while (qwe[fd][i] != '\n' && qwe[fd][i] != '\0')
		i++;
<<<<<<< HEAD
	if (qwe[fd][i] == '\0')
	{
		*line = ft_strdup(qwe[fd]);
		free(qwe[fd]);
		return (1);
	}
	if (qwe[fd][i] == '\n')
=======
	if (arr[fd][i] == '\n')
>>>>>>> 2cbb268... final_blyattttttt
	{
		*line = ft_strsub(qwe[fd], 0, i);
		tmp = ft_strsub(qwe[fd], i + 1, ft_strlen(qwe[fd]) - i);
		qwe[fd] = ft_strdup(tmp);
		free(tmp);
	}
	else
	{
<<<<<<< HEAD
		*line = ft_strdup(qwe[fd]);
		free(qwe[fd]);
=======
		*line = ft_strdup(arr[fd]);
		ft_strdel(&arr[fd]);
>>>>>>> 2cbb268... final_blyattttttt
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
<<<<<<< HEAD
	static char		*qwe[10240];
	int				ret;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
=======
	static char *dest[10240];
	int			ret;
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
>>>>>>> 2cbb268... final_blyattttttt

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
<<<<<<< HEAD
		if (!qwe[fd])
			qwe[fd] = ft_strnew(1);
		tmp = ft_strjoin(qwe[fd], buf);
		free(qwe[fd]);
		qwe[fd] = tmp;
		if (ft_strchr(qwe[fd], '\n'))
=======
		if (dest[fd] == NULL)
			dest[fd] = ft_strnew(1);
		tmp = ft_strjoin(dest[fd], buf);
		free(dest[fd]);
		dest[fd] = tmp;
		if (ft_strchr(dest[fd], '\n'))
>>>>>>> 2cbb268... final_blyattttttt
			break ;
	}
	if (ret == -1)
		return (-1);
<<<<<<< HEAD
	if (ret == 0 && (qwe[fd][0] == '\0' || (!qwe[fd])))
		return (0);
	return (azaza(qwe, line, fd));
=======
	if (ret == 0 && (dest[fd] == NULL || dest[fd][0] == '\0'))
		return (0);
	return (ft_gnl(line, dest, fd));
>>>>>>> 2cbb268... final_blyattttttt
}
