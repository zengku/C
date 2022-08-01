/*
    º¯ÊıÖ¸Õë
*/
#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main(int argc, char const *argv[])
{
    int (*padd)(int, int);
    int ret;

    padd = add;
    ret = (*padd)(1, 2);

    printf("%d", ret);

    return 0;
}
