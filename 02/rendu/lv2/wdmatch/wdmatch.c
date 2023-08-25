#include <stdio.h>
#include <unistd.h>

void    ft_print(char *s)
{
    int i =0;
    while (s[i])
        write(1, &s[i++], 1);
}

int ft_len(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return (len);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (i == ft_len(argv[1]))
            ft_print(argv[1]);
    }
    write (1, &"\n", 1);
}