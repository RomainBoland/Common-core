#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int result;
	int	signe;

	result = 0;
	signe = 1;
	i = 0;
	while (str[i] == 32 || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * signe);
}
/*
int main(int argc, char *argv[])
{
	(void)argc;

	printf("Mon atoi : %d\n", ft_atoi(argv[1]));
	printf("Vrai atoi : %d\n", atoi(argv[1]));
	return (0);
}
*/