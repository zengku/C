#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
    int var[] = {10, 100, 200};
    int i, *ptr;

    // ָ���е������ַ
    ptr = var;
    for (i = 0; i < MAX; i++) {
        printf("�洢��ַ��var[%d] = %p\n", i, ptr);
        printf("�洢ֵ��var[%d] = %d\n", i, *ptr);

        // ָ����һ��λ��
        // ָ��������ݼ�����ָ����һ����ǰһ����Ԫ�صĴ洢��λ
        // ��Ծ���ֽ���ȡ����ָ����ָ������������ͳ��ȣ��磺int ���� 4 ���ֽ�
        ptr++;
    }

    return 0;
}
