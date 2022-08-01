/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/22 23:32:56 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"

char	*file_to_array(char *path)
{
	int		fd;
	char	*read_buffer[1];
	char	*buffer;
	int		file_size;

	file_size = 0;
	fd = open(path, O_RDONLY);
	if (fd == 3)
	{
		while (read(fd, read_buffer, 1))
			file_size++;
		close(fd);
	}
	fd = open(path, O_RDONLY);
	if (fd == 3)
	{
		buffer = malloc((file_size + 1) * sizeof(char));
		if (!buffer)
			return (NULL);
		read(fd, buffer, file_size);
		close(fd);
		buffer[file_size] = '\0';
		return (buffer);
	}
	return (NULL);
}

char	***file_to_array_dict(char *path)
{
	char	*raw_dict;
	char	**file_rows;
	char	***array;
	int		i;

	raw_dict = file_to_array(path);
	file_rows = ft_split(raw_dict, "\n");
	i = 0;
	while (file_rows[i])
		i++;
	array = malloc((i + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (file_rows[i])
	{
		array[i] = ft_split(file_rows[i], ":");
		i++;
	}
	return (array);
}
