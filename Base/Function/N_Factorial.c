#include <stdio.h>

long fac(int n)
{
    long m;
    if (n == 1) {
        m = 1;
    } else {
        m = fac(n - 1) * n;
    }

    return m;
}

int main(void)
{
    int n; 
    float y;

    printf("input the value of n.\n");
    scanf("%d", &n);
    printf("%d! = %ld\n", n, fac(n));
}