#include <stdio.h>
#include <unistd.h>

void	ft_putnum(int n)
{
	if (n >= 10)
		ft_putnum(n/10);
	write (1, &"0123456789"[n % 10], 1);
}

int	main()
{
	int	i;
	
	i = 1;
	while (i <= 100)
	{
		if (i%3 == 0 && i%5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i%3 == 0)
			write (1, "fizz", 4);
		else if (i%5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnum(i);
		i++;
		write(1, "\n", 1);
	}
}

