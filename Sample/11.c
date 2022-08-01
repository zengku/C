/*
    将一个数组逆序输出
*/
#include <stdio.h>

#define N 10

int main(int argc, char const *argv[])
{
    int a[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < (N/2); i++) {
        int temp;
        temp = a[i];
        a[i] = a[N - 1 - i];
        a[N - 1 - i] = temp;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
