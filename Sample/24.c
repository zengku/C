/*
    �Ӽ�������һЩ�ַ�������������͵�������ȥ��ֱ������һ��#Ϊֹ��
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    char filename[25];
    char ch;

    printf("������Ҫ���浽���ļ������ƣ�\n");
    gets(filename);
    if ((fp = fopen(filename, "w")) == NULL) {
        printf("error: cannot open file!\n");
        exit(0);
    }
    printf("�����ڿ���������Ҫ�����һЩ�ַ�����#������\n");
    getchar();
    while ((ch = getchar()) != '#') {
        fputc(ch, fp);
    }

    fclose(fp);
    system("pause");

    return 0;
}
