#include "list.h"

int list_size(t_list* lst)
{
    int     i;
    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

void	sort_int_tab(int *tab, unsigned int size, int (*cmp)(int, int))
{
	unsigned int	i = 0;
	int	temp;

	while (i < (size - 1))//วิ้งจนกว่าจะถึงความยาวของ list
	{
		if ((*cmp)(tab[i], tab[i + 1]) == 0)//คอมแพฟังชั่น ถ้าต้องเปลี่ยนจะเป็น 0
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}

/*
    
    คอมแพฟั่งชั่น
int cmp(int a, int b)
{
	return (a <= b); ถ้า a <= b return 1 ไม่ใช่จะ return 0
}
```*/
}


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int     size = list_size(lst);
    int     a[size];
    int     i = 0;
    t_list  *tmp = lst;
    while (tmp)//เอา list ใส่ array
    {
        a[i] = tmp->data;
        i++;
        tmp = tmp->next;//ขยับ
    }
    sort_int_tab(&a, size, cmp); //sort ในวิธี array
    i = 0;
    tmp = lst;//reset
    while (tmp)
    {
        tmp->data = a[i];
        i++;
        tmp = tmp->next;//ขยับ
    }
    return (lst);
}