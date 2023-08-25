#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char	*s1, char *s2)
{
	int	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}


/*
int	main()
{
	char *s1;
	char *s2;
	s2 = (char*)malloc(7 * sizeof(char));
	s1 = (char*)malloc(7 * sizeof(char));
	s2 = "Hello";
	ft_strcpy(s1,s2);
	printf("s1 = %s\n", s1);
}
*/
