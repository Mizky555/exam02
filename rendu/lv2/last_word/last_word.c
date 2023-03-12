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
	int	i;
	int	len = ft_strlen(argv[1]);
	if (argc == 2)
	{
		while (len >= 0 && ft_isspace(argv[1][len - 1] == 0))
			len--;
			printf("isspace = %d\n",ft_isspace(argv[1][len - 1] == 0));
		while (len >= 0 && ft_isspace(argv[1][len - 1]) != 0)
		{
	printf("len = %d\n", len);
			write(1, &argv[1][len - 1], 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
