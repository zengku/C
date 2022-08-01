#include <stdio.h>

long fibonacci(int n)
{
    if (n == 1 || n== 2) {
        return 1;
    } else {
        return (fibonacci(n - 1) + fibonacci(n -2));
    }
}

int main()
{
    int n, i;
    long y;

    printf("Inpur n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        y = fibonacci(i);
        printf("%d   ", y);
    }
    printf("\n");

    return 0;
}