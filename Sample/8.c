/*
    ���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
    60-89��֮�����B��ʾ��60�����µ���C��ʾ��
    (a>b)?a:b
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score;
    char grade;
    printf("����������� ");
    scanf("%d", &score);
    grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
    printf("%c\n", grade);

    return 0;
}
