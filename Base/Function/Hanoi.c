#include <stdio.h>

void printdisk(char x, char y)
{
    printf("%c----------->%c\n", x, y);
}

void hanoi(int n, char a, char b, char c)
{
    if (n == 1) {                   // A ��������ֻʣ���һ�����Ƶ� C ����
        printdisk(a, c);
    } else {
        hanoi(n - 1, a, c, b);      // A ���ϵ� n-1 �����ӽ��� C �����Ƶ� B ��
        printdisk(a, c);            // �� A ����ʣ�µ�һ�������Ƶ� C ����
        hanoi(n - 1, b, a, c);      // �� n-1 �����Ӵ� B ����� A ���Ƶ� C ��
    }
}

int main()
{
    int n;

    printf("Input n:");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');

    return 0;
}