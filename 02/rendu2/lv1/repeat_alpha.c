#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    repeat(char str, int i)
{
    int j = 1;
    while (i >= j)
    {
        write (1, &str, 1);
        j++;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int n;

    if (argc != 2)
        return (0);
    while (argv[1][i])
    {
        if (argv[1][i] >= 'A' && argv[1][i] <='Z')
        {
            n = argv[1][i] - 'A';
            repeat(argv[1][i], n + 1);
        }
        else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            n = argv[1][i] - 'a';
            repeat(argv[1][i], n + 1);
        }
        else
            write(1, &argv[1][i], 1);
        i++;
    }
    write (1, "\n", 1);
    return (0);
}