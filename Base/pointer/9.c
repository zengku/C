#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *ptr);

int main(int argc, char const *argv[])
{
    unsigned long sec;

    getSeconds(&sec);

    // 输出实际值
    printf("Number of seconds: %ld\n", sec);
     
    return 0;
}

void getSeconds(unsigned long *ptr)
{
    // 获取当前的秒数
    *ptr = time(NULL);
    return;
}
