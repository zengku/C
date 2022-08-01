#include <stdio.h>
#include "math.h"

#define MAXGRADES   101

int main(void)
{
    int i, j, line;
    int array[MAXGRADES];

    for (i = 1; i < MAXGRADES; i++) {   // ����
        array[i] = i;
    }
    
    // �ж������ı�׼��2��sqrt(N)��Χ��û�������ܹ���������j
    for (i = 2; i < sqrt(MAXGRADES); i++) {         // ��������i �ķ�Χ 2-10
        for (j = i + 1; j < MAXGRADES; j++) {   // ��������j �ķ�Χ i+1 �� 100
            if (array[i] != 0 && array[j] != 0) {
                if (array[j] % array[i] == 0) {     // ��������
                    array[j] = 0;
                }
            }
        }
    }

    for (i = 2, line = 0; i < MAXGRADES; i++) {
        if (array[i] != 0) {
            printf ("%5d", array[i]);
            line++;
        }
        if (line == 10) {       // ����
            printf ("\n");
            line = 0;
        }
    }

    printf ("\n");

    return 0;
}