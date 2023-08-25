#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	return(len);
}

int	ft_isspace(char	cha)
{
	if (cha == '\t' || cha == '\n' || cha == '\v' || cha == '\f' || cha == '\r' || cha == ' ')
		return (0);
	return (1);
}

int	main(int	argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		if (i <= 0)
		return (0);
		while (ft_isspace(argv[1][i - 1]) == 0)
		{
			i--;
		}
		while (ft_isspace(argv[1][i - 1]) == 1)
		{
			i--;
		}
		i++;
		while (ft_isspace(argv[1][i - 1]) == 1 && argv[1][i - 1])
		{
			write (1, &argv[1][i-1], 1);
			i++;
		}
		return (0);
	}
}
