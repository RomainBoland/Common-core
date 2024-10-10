#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char test;
	test = ft_tolower('A');
	printf("%c\n", test);
	return (0);
}
*/