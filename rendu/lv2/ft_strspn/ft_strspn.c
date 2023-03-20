#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;

	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}

int	main()
{
	printf("strspn = %lu\n",ft_strspn("Hello World","WHello " ));
}


// int	main()
// {

// 	printf("sizte = %lu\n",strspn("hello","ello"));
// }
