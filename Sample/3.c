/*
一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，问该数是多少？
*/
#include <stdio.h>

/*
    x + 100 = n * n;  x + 100 + 168 = m * m;
    m^2 - n^2 = 168
    (m-n)*(m+n) = 168
      i  *  j   = 168
    m+n=i,m-n=j,i*j=168
    m=(i+j)/2,n=(i-j)/2
    i and j 均大于等于 2
    1 < i < 168/2 + 1
*/

int main(int argc, char const *argv[])
{
    int  i, j, m, n, x;
    for (i = 1; i < 168 / 2 + 1; i++)
    {
        if (168 % i == 0)
        {
            j = 168 / i;
            if ( i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
            {
                m = (i + j) / 2;
                n = (i - j) / 2;
                x = n * n - 100;
                printf ("%d + 100 = %d * %d\n", x, n, n);
                printf ("%d + 268 = %d * %d\n", x, m, m);
            }
        }
    }    

    return 0;
}
