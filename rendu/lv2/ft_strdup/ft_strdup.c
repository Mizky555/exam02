#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	len = 0;

	while (str[len])
		len++;
	return (len);
}

char    *ft_strdup(char *src)
{
	char	*str;
	int	i = 0;

	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	printf("Hello %s\n",ft_strdup("Opal"));
}
