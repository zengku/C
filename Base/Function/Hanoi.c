#include <stdio.h>

void printdisk(char x, char y)
{
    printf("%c----------->%c\n", x, y);
}

void hanoi(int n, char a, char b, char c)
{
    if (n == 1) {                   // A 针盘子数只剩最后一个，移到 C 针上
        printdisk(a, c);
    } else {
        hanoi(n - 1, a, c, b);      // A 针上的 n-1 个盘子借助 C 针先移到 B 针
        printdisk(a, c);            // 将 A 针上剩下的一个盘子移到 C 针上
        hanoi(n - 1, b, a, c);      // 将 n-1 个盘子从 B 针借助 A 针移到 C 针
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