#include <stdio.h>
#include "math.h"

#define MAXGRADES   101

int main(void)
{
    int i, j, line;
    int array[MAXGRADES];

    for (i = 1; i < MAXGRADES; i++) {   // 定义
        array[i] = i;
    }
    
    // 判断素数的标准：2到sqrt(N)范围内没有整数能够整除变量j
    for (i = 2; i < sqrt(MAXGRADES); i++) {         // 求素数，i 的范围 2-10
        for (j = i + 1; j < MAXGRADES; j++) {   // 求素数，j 的范围 i+1 到 100
            if (array[i] != 0 && array[j] != 0) {
                if (array[j] % array[i] == 0) {     // 不能整除
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
        if (line == 10) {       // 换行
            printf ("\n");
            line = 0;
        }
    }

    printf ("\n");

    return 0;
}