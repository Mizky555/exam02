#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	a = 1;
	int	num = 0;

	while (str[i] == '\t' | str[i] == '\n' | str[i] == '\v' | str[i] == '\f' | str[i] == '\r' | str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		a = -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	if (str[i] == '+')
	{
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * a);
}

int main()
{
	printf("test %d\n",ft_atoi("+890"));
}
