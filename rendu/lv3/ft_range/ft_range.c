#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size;
    int *res;
    int i = 0;
    int s = start;

    size = end - start;
    if (size == 0)
        return (0);
    if (size < 0)
        size = size * -1;
    res = (int *)malloc(sizeof(int) * size);

    printf("s = %d\n", s);
    res[i] = start;
    i++;
    res[size - 1] = end;
    while (i < size)
    {
        if (start < end)
        {
            res[i] = s + i;
            start++;
        }
        else if (start > end)
        {
            res[i] = s - i;
            start--;
        }
        i++;
    }
    return (res);
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
    printf("res[3] = %d\n",res[3]);

    
}