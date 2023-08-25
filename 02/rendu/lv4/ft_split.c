#include<unistd.h>
#include<stdlib.h>

int ft_isspace(char c)
{
    if(c==' ' || c=='\t' || c== '\n')
        return(1);
    return(0);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k= 0;
    char **ret;//คำเล็กๆ
    char *word;

    ret = malloc(sizeof(char *) * 5000);//สำหรับตัวใหญ่ (ประโยค)
    while(str[i] != '\0')
    {
        while(ft_isspace(str[i])==1)//ซ้ายตัวแรกเป็น is_space ไหมถ้าใช่ให้ข้าม
            i++;
        if(!str[i])// เช็คจาก while isspace ด้านบน ถ้าเจอ \0 ให้ break
            break;
        word = malloc(sizeof(char) * 5000);//สำหรับแต่ละคำ
        while(ft_isspace(str[i])==0)//ถ้าไม่ใช่ isspace ให้ยัด char ที่มาจาก str เข้าไปในคำเล็ก
        {
            word[j] = str[i];//ยัดคำ
            j++;
            i++;
        }
        word[j] = '\0';
        j=0;
        ret[k]=word;
        k++;
    }
    ret[k] = NULL;
    return(ret);
}