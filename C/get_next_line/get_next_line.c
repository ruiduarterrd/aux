/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:02:40 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 21:02:55 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*next_line;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	next_line = ft_strjoin(0, buffer);
	if (ft_clean(buffer) > 0)
		return (next_line);
	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes < 0 || (bytes == 0 && (*next_line == '\0')))
	{
		free(next_line);
		return (NULL);
	}
	while (bytes > 0)
	{
		next_line = ft_strjoin(next_line, buffer);
		if (ft_clean(buffer) > 0)
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
	}
	return (next_line);
}
