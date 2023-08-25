#include <unistd.h>

void ft_putnbr(int num)
{
    if (num >= 10)
    {
        ft_putnbr(num/10);
    }
    num = num % 10 + '0';
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

int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int main(int argc, char *argv[])
{

}