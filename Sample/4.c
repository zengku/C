/*
    ���9*9�ھ�
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (i >= j) {
                printf("%d*%d=%d  ", i, j, (i*j));
            }
        }
        printf("\n");
    }

    return 0;
}
