#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	printf("%d\n",ft_strcmp("Op2","Op1"));
// }
