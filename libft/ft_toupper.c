#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
	char test;
	test = ft_toupper('a');
	printf("%c\n", test);
	return (0);
}
*/