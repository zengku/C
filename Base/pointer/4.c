#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
    int var[] = {10, 100, 200};
    int i, *ptr;

    // ָ�������һ��Ԫ�صĵ�ַ
    ptr = &var[MAX - 1];
    for (i = MAX; i > 0; i--) {
        printf("�洢��ַ��var[%d] = %p\n", i-1, ptr);
        printf("�洢ֵ��var[%d] = %d\n", i-1, *ptr);
        ptr--;       
    }
    
    return 0;
}
