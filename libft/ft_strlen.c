#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	char *test = "Hello World!";
	size_t size;

	size = ft_strlen(test);
	printf("%ld\n", size);
	return (0);
}
*/