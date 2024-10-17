#include "libft.h"

char    *ft_strdup(const char *src)
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
    return (copy);
}
/*
#include <stdio.h>
int     main(void)
{
    printf("copy : %s\n", ft_strdup("jcrois j ai compris"));
    return 0;
}
*/