#include <stdio.h>

int main()
{
    int i, j;
    int a[10][10];

    for (i = 0; i < 10; i++) {      // 初始化第 0 行和对角线元素
        a[i][0] = 1;
        a[i][i] = 1;
    }

    for (i = 2; i < 10; i++) {      // 公式计算元素值
        for (j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (i = 0; i < 10; i++) {      // 打印数组
        for (j = 0; j <= i; j++) {
            printf ("%5d", a[i][j]);
        }
        printf ("\n");
    }

    return 0;
}