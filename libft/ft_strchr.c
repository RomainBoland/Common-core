#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	tmp_c;

	tmp_c = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == tmp_c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == tmp_c)
			return ((char *)&s[i]);
	return (NULL);
}