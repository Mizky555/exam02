#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                    i++;
                    write (1, "\t", 1);
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}