/*
    void *calloc(int num, int size);
    在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。
    所以它的结果时分配了 num*size 个字节长度的内存空间，并且每个字节的值都是 0。

    void free(void *address);
    该函数释放 address 所指向的内存块，释放的是动态分配的内存空间。

    void *malloc(int num);
    在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后
    不会被初始化，它们的值是未知的。

    void *realloc(void *address, int newsize);
    该函数重新分配内存，把内存扩展到 newsize。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[100];

    strcpy(name, "Zara Ali");

    char *description = (char *)malloc(200 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description:%s\n", description);

    return 0;
}
