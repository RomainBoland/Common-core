#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*(tmp++) = 0;
		n--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char str[50] = "Hello World!";

	printf("Str avant bzero : %s\n", str);
	ft_bzero(str + 5, 5);
	printf("Str apres bzero : %s\n", str);
	return (0);
}
*/