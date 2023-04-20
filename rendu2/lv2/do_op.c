#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        char op = argv[2][0];
        switch(op)
        {
            case '+':
            printf("%d",(atoi(argv[1]) + atoi(argv[3])));
            break;
            case '-':
            printf("%d",(atoi(argv[1]) - atoi(argv[3])));
            break;
            case '*':
            printf("%d",(atoi(argv[1]) * atoi(argv[3])));
            break;
            case '/':
            printf("%d",(atoi(argv[1]) / atoi(argv[3])));
            break;
        }
    }
    printf("\n");
}