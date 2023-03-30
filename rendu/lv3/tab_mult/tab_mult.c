#include <unistd.h>
#include <stdio.h>

char    putnbr(int  num)
{
    int
}

int	ft_atoi(const char *str)
{
    int i = 0;
    int a = 1;
    int num = 0;

    while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
        i++;
    if (str[i] == '-')
    {
        a = -1;
        i++;
        if (str[i] == '+' || str[i] == '-')
            return (0);
    }
    else if (str[i] == '+')
    {
        i++;
        if (str[i] == '+' || str[i] == '-')
            return (0);
    }
    while (str[i])
    {
        num = num * 10 +(str[i] - '0');
        i++;
    }
    return (num * a);

}

int main(int argc, char **argv)
{
    int i = 1;
    int num;
    int tmp;

    if (argc == 2)
    {
        num = ft_atoi(argv[1]);
        while (i <= 9)
        {
            tmp = num * i;
            write(1, &i, 1);
            write(1, " x ", 3);
            write(1, &num, 1);
            write(1, " = ", 3);
            write(1, &tmp, 1);
            write(1, "\n", 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}