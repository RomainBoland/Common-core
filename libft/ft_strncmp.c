#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "oui oui";
	char *s2 = "oui ";

	printf("%d\n", ft_strncmp(s1, s2, 5));
	return(0);
}
*/