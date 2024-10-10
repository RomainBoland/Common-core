#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char test = 'a';
	printf("%d\n", ft_isascii(test));
	return (0);
}
*/