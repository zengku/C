#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
    int var[] = {10, 100, 200};
    int i, *p;

    p = var;
    i = 0;
    while (p <= &var[MAX - 1])
    {
        printf("�洢��ַ��var[%d] = %p\n", i, p);
        printf("�洢ֵ��var[%d] = %d\n", i, *p);

        p++;
        i++;
    }
        
    return 0;
}
