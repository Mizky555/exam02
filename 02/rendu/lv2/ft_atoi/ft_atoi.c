#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *s)
{
    int i = 0;
    int a = 1;
    int num = 0;

    while (s[i] == '\f' || s[i] == '\n' || s[i] == '\r' || s[i] == '\t' ||s[i] == '\v')
        i++;
    if (s[i] == '-')
    {
        a = -1;
        i++;
        if (s[i] == '-' || s[i] == '+')
            return (0);
    }
    else if (s[i] == '+')
    {
        i++;
        if (s[i] == '+' || s[i] == '-')
            return (0);
    }
    while (s[i])
    {
        num = num * 10 + (s[i++] - '0');
    }
    return (num);
    
}

// int ft_atoi(const char *str)
// {
//     int i = 0;
//     int num = 0;
//     int a = 1;

//     while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)//ไม่เอาspace tab
//         i++;
//     if (str[i] == '-')// - ได้แค่ตัวเดียว
//     {
//         i++;
//         a = -1;
//         if (str[i] == '-' || str[i] == '+')
//             return (0);
//     }
//     if (str[i] == '+')// + ให้ขยับ
//         i++;
//     while (str[i] >= '0' && str[i] <= '9')
//     {
//         num = num * 10 + (str[i] - '0');
//         i++;
//     }
//     return (num * a);
// }

int main()
{
    printf("%d\n",ft_atoi("--123"));
    printf("%d\n",atoi("--123"));
}