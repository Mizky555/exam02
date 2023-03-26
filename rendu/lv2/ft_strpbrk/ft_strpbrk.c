#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;

    while (*s1)
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                return ((char *)s1);
            }
            j++;
        }
        s1++;
    }
    return (0);
}

int main()
{
    printf("test lo ,Hello ->  %s\n",ft_strpbrk("",""));
    printf("real lo ,Hello ->  %s\n",strpbrk("",""));
}