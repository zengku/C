/*
    八进制转换为十进制
*/
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
    int n = 0, i = 0;
    char s[20];

    printf("请输入一个八进制数：\n");
    gets(s);
    while (s[i] != '\0') {
        n = n * 8 + s[i] - '0';
        i++;
    }
    printf("八进制转换为十进制为 \n%d\n", n);

    system("pause");
    return 0;
}
