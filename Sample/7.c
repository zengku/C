/*
    ��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;

    printf("������������");
    scanf("%d", &n);
    printf("%d=", n);
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d", i);
            n /= i;
            if (n != 1) {
                printf("*");
            }
        }
    }
    printf("\n");

    return 0;
}
