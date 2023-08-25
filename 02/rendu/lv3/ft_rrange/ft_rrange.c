#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int *ft_rrang(int start, int end)
{
    int i = 0;
    int *res;
    int size = start - end;

    if (size == 0)
        return (0);
    if (size < 0)
        size = end - start;
    res = (int *)malloc(sizeof(int) * size);
    res[i] = end;
    i++;
    res[size - 1] = start;
    while (i <= size)
    {
        if (start < end)
        {
            res[i] = end - i;
        }
        else if (start > end)
        {
            res[i] = end + i;
        }
        i++;
    }
    return (res);
}





int main()
{
    int start = -1;
    int end = 2;
    int *res;

    res = ft_rrang(start, end);
    printf("[0] = %d\n", res[0]);
    printf("[1] = %d\n", res[1]);
    printf("[2] = %d\n", res[2]);
    printf("[3] = %d\n", res[3]);
}