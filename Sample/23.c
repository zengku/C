/*
    �˽���ת��Ϊʮ����
*/
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
    int n = 0, i = 0;
    char s[20];

    printf("������һ���˽�������\n");
    gets(s);
    while (s[i] != '\0') {
        n = n * 8 + s[i] - '0';
        i++;
    }
    printf("�˽���ת��Ϊʮ����Ϊ \n%d\n", n);

    system("pause");
    return 0;
}
