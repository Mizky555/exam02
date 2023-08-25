#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/*
int	main()
{
	int	a = 1;
	int	b = 9;
	ft_swap(&a, &b);
	printf("a = %d b = %d\n", a, b);
}
*/
