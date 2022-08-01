#include <stdio.h>

#define MAXGRADES   6

int main()
{
    int i, temp;
    int array[MAXGRADES] = {1, 2, 3, 0, 4, 5};

    printf ("原先数组：\n");
    for (i = 0; i < MAXGRADES; i++) {
        printf ("%4d", array[i]);
    }

    for (i = 0; i < (MAXGRADES / 2); i++) {     // MAXGRADES / 2 交换次数
        temp = array[i];
        array[i] = array[MAXGRADES - i - 1];
        array[MAXGRADES - i -1] = temp;
    }

    printf ("\n逆序数组：\n");
     for (i = 0; i < MAXGRADES; i++) {
        printf ("%4d", array[i]);
    }

    return 0;
}