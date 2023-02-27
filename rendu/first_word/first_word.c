#include <stdio.h>
#include <unistd.h>


int	is_space(char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}


int	 first_word(char *argv)
{
	int i = 0;

	while (is_space(argv[i]) == 1)
		i++;
	while (is_space(argv[i]) == 0)
	{
		write(1, &argv[i], 1);
		i++;
	}
	return (0);
}

int	 main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
}
