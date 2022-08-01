#include <stdio.h>

#define MAXGRADES 5

int main(void)
{
    int i;
    int array[MAXGRADES];

    for (i = 0; i < MAXGRADES; i++) {
        printf ("请输入第 %d 个元素:", i);
        scanf ("%d", &array[i]);
    }

    for (i = 0; i < MAXGRADES; i++) {
        printf ("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}