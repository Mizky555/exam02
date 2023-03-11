#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int num = atoi(argv[1]);
    int numnum = atoi(argv[3]);
    int nuum;

    printf("%d,%s,%d\n",num,argv[3],numnum);
    if (argc == 4)
    {
        if (argv[2][0] == '+')
            nuum = num + numnum;
        else if (argv[2][0] == '-')
            nuum = num - numnum;
        else if (argv[2][0] == '*')
            nuum = num * numnum;
        else if (argv[2][0] == '/')
            nuum = num / numnum;
        else if (argv[2][0] == '%')
            nuum = num % numnum;
        printf("%d",nuum);
    }
    printf("\n");
    return (0);
}
