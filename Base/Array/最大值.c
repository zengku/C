#include <stdio.h>

#define MAXELS  5

void findMax(int vals[MAXELS])
{
    int i, max;

    max = vals[0];
    for (i = 1; i < MAXELS; i++) {
        if (max < vals[i]) {
            max = vals[i];
        }
    }
    printf ("max = %d", max);
}

int main(void)
{
    int array[MAXELS] = {10, 28, 74, 81, 19};

    findMax (array);    // 数组名作为参数

    return 0;
}