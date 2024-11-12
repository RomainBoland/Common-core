/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <rboland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:17:57 by rboland           #+#    #+#             */
/*   Updated: 2024/11/12 17:13:51 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

void		*ft_memcpy(void *dst, const void *src, size_t size);
size_t		ft_strlen(const char *str);
char		*ft_strjoin(char *s1, const char *s2);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(char *src);
char		*get_next_line(int fd);

#endif