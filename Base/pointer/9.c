#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *ptr);

int main(int argc, char const *argv[])
{
    unsigned long sec;

    getSeconds(&sec);

    // ���ʵ��ֵ
    printf("Number of seconds: %ld\n", sec);
     
    return 0;
}

void getSeconds(unsigned long *ptr)
{
    // ��ȡ��ǰ������
    *ptr = time(NULL);
    return;
}
