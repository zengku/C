#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
    int var[] = {10, 100, 200};
    int i, *p[MAX];

    for (i = 0; i < MAX; i++) {
        p[i] = &var[i];     // ��ֵΪ�����ĵ�ַ
    }
    
    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *p[i]);
    }

    return 0;
}
