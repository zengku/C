/*
    �� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            for (int k = 1; k < 5; k++) {
                if (i != k && i != j && i!= k) {
                    printf("%d, %d, %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}
