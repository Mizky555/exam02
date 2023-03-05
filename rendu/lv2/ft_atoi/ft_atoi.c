#include <unistd.h>
#include <stdio.h>


int ft_atoi(const char *str)
{
    int i = 0;
    int num = 0;
    int a = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        a = -1;
        i++;
    }
    if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (num * a);
}

// int main()
// {
//     printf("%d\n",ft_atoi("-+123"));
// }