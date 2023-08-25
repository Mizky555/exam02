#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strrev(char *str)
{
	int	i = 0;
	char tmp;
	int	last = ft_strlen(str);

	printf("last = %d\n", last);
	while (i < last)
	{
		tmp = str[i];

		str[i] = str[last - 1];
		str[last - 1] = tmp;
		i++;
		last--;
	}
	return (str);
}

int	main()
{
	char str[] = "Hello";
	printf("test = %s\n", ft_strrev(str));
}
