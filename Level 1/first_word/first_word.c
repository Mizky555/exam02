#include <unistd.h>

void first_word(char *argv)
{
    int i = 0;

    while (argv[i] == ' ' || argv[i] == '\t')
        i++;
    while (argv[i] != ' ' && argv[i] != '\t' && argv[i] != '\0')
    {
        write(1,&argv[i++],1);
    }
}



int main(int argc, char **argv)
{
    if (argc == 2)
    {
        first_word(argv[1]);
    }
    write(1,"\n",1);
    return (0);
}
