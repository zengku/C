/*
    ��һ���ַ����ĳ���
*/
#include <stdio.h>
#include <stdlib.h>

int length(char *str)
{
    int i = 0;
    while (*str != '\0') {
        i++;
        str++;
    }
    return i;
}

int main(int argc, char const *argv[])
{
    int len;
    char str[20];
    printf("�������ַ�����\n");
    scanf("%s", str);
    len = length(str);
    printf("�ַ����� %d ���ַ���", len);

    return 0;
}
