#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int num)
{
    if (num >= 10)
    {
        ft_putnbr(num/10);
    }
    num = num % 10 + '0';
    write(1, &num, 1);
}

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

int ft_prime(int num)
{
    int i = 2;
    int count = 0;
    
    while (i <= num)
    {
        if ((num % i) == 0)
            count++;
        i++;
    }
    if (count == 1)//จำนวนเฉพาะ
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
	int n = 0;
    int sum = 0;
	int num = ft_atoi(argv[1]);
	
	if (argc == 2)
	{
		if (ft_prime(num) == 1)
        {
            while(n <= num)
            {
                if (ft_prime(n) == 1)
                    sum = sum + n;
                n++;
            }
        }
	    ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}