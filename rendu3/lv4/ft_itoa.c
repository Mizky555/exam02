#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int	n = nbr;
	int	len = 0;
	char	*str;

	if (nbr <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return NULL;
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{
		nbr = nbr * -1;
		str[0] = '-';
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

int main ()
{
	printf("%s\n",ft_itoa(-123));
}

