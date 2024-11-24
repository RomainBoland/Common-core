/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <rboland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:32:11 by rboland           #+#    #+#             */
/*   Updated: 2024/11/12 17:27:35 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	i = 0;
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static int	init_and_read(int fd, char **stash, char *buff)
{
	int	bytes_read;

	if (!(*stash))
	{
		*stash = ft_strdup("");
		if (!(*stash))
			return (-1);
	}
	bytes_read = read(fd, buff, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		if (bytes_read == 0 && *stash && **stash)
			return (0);
		free(*stash);
		*stash = NULL;
		return (-1);
	}
	if (bytes_read > 0)
	{
		buff[bytes_read] = '\0';
		*stash = ft_strjoin(*stash, buff);
		if (!(*stash))
			return (-1);
	}
	return (bytes_read);
}

static char	*get_line_and_update_stash(char **stash, char *newline_pos)
{
	char	*new_stash;
	char	*line;

	if (newline_pos)
	{
		line = ft_substr(*stash, 0, newline_pos - *stash + 1);
		new_stash = ft_strdup(newline_pos + 1);
		free(*stash);
		*stash = new_stash;
	}
	else
	{
		line = ft_strdup(*stash);
		free(*stash);
		*stash = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	char		buff[BUFFER_SIZE + 1];
	static char	*stash;
	char		*newline_pos;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		newline_pos = ft_strchr(stash, '\n');
		if (newline_pos)
			return (get_line_and_update_stash(&stash, newline_pos));
		bytes_read = init_and_read(fd, &stash, buff);
		if (bytes_read < 0 || !stash)
			return (NULL);
		if (bytes_read == 0 && stash && *stash)
			return (get_line_and_update_stash(&stash, NULL));
		if (bytes_read == 0)
			return (NULL);
	}
}
/*
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	*result;
	int		fd;
	int i;

	i = 1;
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Erreur lors de l ouverture du fichier");
		return (1);
	}
	result = get_next_line(fd);
	while (result)
	{
		printf("(%d) Result : %s",i , result);
		free(result);
		result = get_next_line(fd);
		i++;
	}
	return (0);
}
*/
