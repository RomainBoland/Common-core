#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isalpha('-1'));
    return 0;
}
*/