#include <stdio.h>
#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	int	num = 1;
	int	power = 1;

	while (power <= n)
	{
		if (power == n)
			return (1);
		power = num * num;
		num++;
	}
	return (0);
}

int	main()
{
	printf("= %d\n",is_power_of_2(9));
}
