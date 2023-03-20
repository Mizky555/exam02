#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (s[i])
	{
		j = 0;
		while (reject(j))
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main ()
{
	printf("strcspn%lu\n",strcspn("Helloa","abced"));
}
