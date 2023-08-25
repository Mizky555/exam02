#include <stdio.h>
#include <unistd.h>

int	max(int* tab, unsigned int len)
{
	int	tmp;
	int	i = 0;

	tmp = tab[len - 1];
	while (len - 1 > i)
	{
		if (tmp <= tab[i])
		{
			tmp = tab[i];
		}
		i++;
	}
	return (tmp);
}

int	main()
{
	int	len = 0;
	int	i[10] = {9,7,11,1,4,2,6,5,8,0};

	printf("max = %d\n", max(i, 10));
}
