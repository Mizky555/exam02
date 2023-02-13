#include <unistd.h>

void rotone(char *argv)
{
    int i = 0;
    char s;

    while (argv[i] != '\0')
    {
        s = argv[i];
        s = s+1;
        if (argv[i] >= 'A' && argv[i] <= 'Y')
            write(1,&s,1);
        else if (argv[i] >= 'a' && argv[i] <= 'y')
            write(1,&s,1);
        else if (argv[i] == 'Z')
            write(1,"A",1);
        else if (argv[i] == 'z')
            write(1,"a",1);
        else
            write(1,&argv[i],1);
        i++;
    }
}

int main(int    argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    write (1,"\n",1);
}