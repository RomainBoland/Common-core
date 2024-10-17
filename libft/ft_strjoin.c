#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = ft_calloc(len1 + len2 + 1, sizeof(char));
	if(!str)
		return (NULL);
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2);
	str[len1 + len2] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello ";
	char	*s2 = "World!";
	char	*s3;

	s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	return (0);
}
*/