#include <stdio.h>

#define MAXELS  5

void findMax(int [], int);

int main(void)
{
    int nums[MAXELS] = {0};
    int i, value;

    value = 0;
    printf ("���ú���ǰ��\n");
    for (i = 0; i < MAXELS; i++) {
        printf ("nums[%d] = %d\n", i, nums[i]);
    }
    printf ("value = %d\n", value);
    findMax (nums, value);
    printf ("���ú�����\n");
    for (i = 0; i < MAXELS; i++) {
        printf ("nums[%d] = %d\n", i, nums[i]);
    }
    printf ("value = %d\n", value);

    return 0;
}

void findMax(int vals[], int m)
{
    int i;

    m = 1;
    printf ("findMax ��������\n");
    for (i = 1; i < MAXELS; i++) {
        vals[i] = 1;
        printf ("vals[%d] = %d\n", i, vals[i]);
    }
    printf ("m = %d\n", m);
}