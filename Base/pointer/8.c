#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v;
    int *p1;
    int **p2;

    v = 100;

    // 获取 v 的地址
    p1 = &v;

    // 使用运算符 & 获取 p1 的地址
    p2 = &p1;

    printf("var = %d\n", v);
    printf("p1 = %p\n", p1);
    printf("p1 = %d\n", *p1);
    printf("p2 = %p\n", p2);
    printf("**p2 = %d\n", **p2);

    return 0;
}
