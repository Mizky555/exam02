#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size = end - start;
    int res[size];
    int i = 0;


    res[i] = start;
    i++;
    res[size - 1] = end;
    while (size != 0)
    {
        if (start < end)
            res[i] = start + i;
        else if (start > end)
            res[i] = start - i;
        i++;
        size--;
    }
    return (&res);
}

int main()
{
    int start = 0;
    int end = 3;
    int *res;

    res = ft_range(start, end);
    printf("res[0] = %d\n",res[0]);
    printf("res[1] = %d\n",res[1]);
    printf("res[2] = %d\n",res[2]);
    
}