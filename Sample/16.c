/*
    求一个字符串的长度
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
    printf("请输入字符串：\n");
    scanf("%s", str);
    len = length(str);
    printf("字符串有 %d 个字符。", len);

    return 0;
}
