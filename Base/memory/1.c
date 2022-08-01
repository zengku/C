/*
    void *calloc(int num, int size);
    ���ڴ��ж�̬�ط��� num ������Ϊ size �������ռ䣬����ÿһ���ֽڶ���ʼ��Ϊ 0��
    �������Ľ��ʱ������ num*size ���ֽڳ��ȵ��ڴ�ռ䣬����ÿ���ֽڵ�ֵ���� 0��

    void free(void *address);
    �ú����ͷ� address ��ָ����ڴ�飬�ͷŵ��Ƕ�̬������ڴ�ռ䡣

    void *malloc(int num);
    �ڶ�������һ��ָ����С���ڴ�ռ䣬����������ݡ�����ڴ�ռ��ں���ִ����ɺ�
    ���ᱻ��ʼ�������ǵ�ֵ��δ֪�ġ�

    void *realloc(void *address, int newsize);
    �ú������·����ڴ棬���ڴ���չ�� newsize��
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
