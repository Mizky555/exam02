#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z') //ถ้าเป็ยตัวใหญ่จะทำใเป็นตัวเล็ก
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z')    //ถ้าเป็นตัวเล็ก
                    && (str[i + 1] == ' ' \ //และตัวต่อไปเป็น space หรือ tab null 
                    || str[i + 1] == '\t' || str[i + 1] == '\0'))  
            str[i] -= 32; //ให้เป็นตัวใหญ่
        write(1, &str[i++], 1);
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}
