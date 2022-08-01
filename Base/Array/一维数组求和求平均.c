#include <stdio.h>

#define MAXGRADES   5

int main(void)
{
    int i;
    int array[MAXGRADES];
    int total;

    for (i = 0; i < MAXGRADES; i++) {
        printf ("请输入第 %d 个元素:", i);
        scanf ("%d", &array[i]);
    }

    total = 0;
    for (i = 0; i < MAXGRADES; i++) {
        printf ("array[%d] = %d\n", i, array[i]);
        total += array[i];
    }
    printf ("输入的数组元素和为: %d 平均数为: %d\n", total, (total / MAXGRADES));           

    return 0;
}
                                                                                    