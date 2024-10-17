#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if(!s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
		return("");
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if(!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "Hello World!";
	char *cpy;

	cpy = ft_substr(str, 6, 15);
	printf("%s\n", cpy);
	free(cpy);
	return (0);
}
*/