/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <rboland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:32:11 by rboland           #+#    #+#             */
/*   Updated: 2024/11/06 17:38:37 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Search c character in s string and return a pointer to
 * the first occurence, returns NULL if not found */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	tmp_c;

	tmp_c = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == tmp_c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == tmp_c)
		return ((char *)&s[i]);
	return (NULL);
}

/* Takes a pointer to a location in a string, malloc
 * from this pointer to the end, fill it by copying
 * and returns the new string */

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

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
	copy[i] = 0;
	free(src);
	return (copy);
}

char	*get_next_line(int fd)
{
	char		buff[BUFFER_SIZE + 1];
	static char	*stash;
	char		*newline_pos;
	int			bytes_read;
	char		*line;

	if (fd < 0)
		return (NULL);
	stash = NULL;
	newline_pos = ft_strchr(stash, '\n');
	while (newline_pos == NULL)
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buff[bytes_read] = '\0';
		stash = ft_strjoin(stash, buff);
		newline_pos = ft_strchr(stash, '\n');
	}
	if (newline_pos)
	{
		line = ft_substr(stash, 0, newline_pos - stash + 1);
		stash = ft_strdup(newline_pos + 1);
		return (line);
	}
	else if (stash)
	{
		line = ft_strdup(stash);
		stash = NULL;
		return (line);
	}
	return (NULL);
}
