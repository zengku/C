#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *getRandom()
{
    static int r[10];   // static 定义局部变量才不会随函数调用结束被释放
    int i;

    // 设置种子
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; ++i) {
        r[i] = rand();
        printf("%d\n", r[i]);
    }

    return r;
}

int main(int argc, char const *argv[])
{
    int *p;
    int i;

    p = getRandom();
    for (i = 0; i < 10; i++) {
        printf("*(p + [%d]) : %d\n", i, *(p + i));
    }

    return 0;
}

