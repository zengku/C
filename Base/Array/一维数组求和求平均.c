#include <stdio.h>

#define MAXGRADES   5

int main(void)
{
    int i;
    int array[MAXGRADES];
    int total;

    for (i = 0; i < MAXGRADES; i++) {
        printf ("������� %d ��Ԫ��:", i);
        scanf ("%d", &array[i]);
    }

    total = 0;
    for (i = 0; i < MAXGRADES; i++) {
        printf ("array[%d] = %d\n", i, array[i]);
        total += array[i];
    }
    printf ("���������Ԫ�غ�Ϊ: %d ƽ����Ϊ: %d\n", total, (total / MAXGRADES));           

    return 0;
}
                                                                                    