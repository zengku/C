// Ԥ�����
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("File: %s\n", __FILE__);     // ��ǰ�ļ���
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__); 
    printf("Line: %d\n", __LINE__);     // ��ǰ��
    printf("ANSI: %d\n", __STDC__);     // ����������ANSI�����ʱ������Ϊ 1��

    return 0;
}
