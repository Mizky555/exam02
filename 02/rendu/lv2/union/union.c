#include <stdio.h>
#include <unistd.h>

int	ft_len(char *str)
{
	int	len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}

void	print_union(char *str)
{
	int	index = 0;
	int	i;

	while (str[index])
	{
		i = 0;
		while (i < index)
		{
			if (str[index] == str[i])
				break;
			i++;
		}
		if (index == i)
			write (1, &str[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	int	len_1 = 0;
	int	i = 0; 

	len_1 = ft_len(argv[1]);
	if (argc == 3)
	{
		while (argv[2][i])
		{
			argv[1][len_1++] = argv[2][i++];
		}
		argv[1][len_1] = '\0';
		print_union(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}

