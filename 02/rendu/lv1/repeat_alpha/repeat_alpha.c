#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	repeat_alpha(char str, int	j)
{
	while (j > 0)
	{
		write(1, &str, 1);
		//	printf("j = %d\n",j);
		j--;
	}
}

int main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 'A';
				repeat_alpha(argv[1][i], j + 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 'a';
				repeat_alpha(argv[1][i], j + 1);
			}
			else
				write(1, argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return(0);
}
