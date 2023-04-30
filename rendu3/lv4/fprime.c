#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i = 2;
	int m=1;

	if (argc == 2)
	{
		int	num = atoi(argv[1]);
		if (num == 1)
			printf("1");
		while (num > 1)
		{
			if (num % i == 0)
			{
				if (m)
					m=0;
				else
					printf("*");
				printf("%d",i);
				num = num / i;
			}
			else if(num == i)
				break;
			else
			{
				i++;
			}
		}
	}
	printf("\n");
	return (0);
}
