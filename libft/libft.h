#ifndef LIBFT_H
# define LIBFT_H

	#include <stddef.h>
	int ft_isalpha(int c);
	int	ft_isdigit(int c);
	int	ft_isalnum(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	int	ft_strlen(char *str);
	int	ft_toupper(int c);
	int	ft_tolower(int c);
	int	ft_atoi(char *str);
	void	*ft_memcpy(void *dst, const void *src, size_t size);
	void	*ft_memset(void *pointer, int value, size_t len);

#endif