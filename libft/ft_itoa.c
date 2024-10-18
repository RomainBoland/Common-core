#include "libft.h"

static size_t	count_nbrs(int	n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	fill_tab(char *tab, int n, size_t len)
{
	size_t	i;

	i = 1;
	while (i < len)
	{
		tab[len - i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	tab[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*tab;
	size_t	len;
	int	sign;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		len = 1;
		n = -n;
		sign = 1;
	}
	else
		len = 0;
	len += count_nbrs(n);
	tab = (char *)malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	if (sign)
		tab[0] = '-';
	fill_tab(tab, n, len);
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = -154666;
	char *tab;

	tab = ft_itoa(n);
	printf("%s", tab);
	return (0);
}
*/