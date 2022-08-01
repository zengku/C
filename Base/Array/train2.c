/* 
 * 某公司使用公用电话传递数据，数据是 4 位的整数，在传递过程中是加密的，
 * 加密规则是：
 * 每位数字都加上 5， 然后用加上 5 后的数字除以 10 的余数代替该数字，
 * 再将第 1 位和第 4 位交换，第 2 位和第 3 位交换。 
 */

#include <stdio.h>

int main()
{
    int old;
    int new[4] = {0};
    int i;
    int temp;

    printf ("请输入一个 4 位数的整数：");
    scanf ("%d", &old);

    /* 数据处理 */
    new[0] = old / 1000;
    new[1] = old / 100 % 10;
    new[2] = old / 10 % 10;
    new[3] = old % 10;

    for (i = 0; i < 4; i++) {
        new[i] += 5;
        new[i] %= 10;
    }

    temp = 0;
    for (i = 0; i < 3 / 2; i++) {
        temp = new[i];
        new[i] = new[3 - i];
        new[3 - i] = temp;
    }

    for (i = 0; i < 4; i++) {    
        printf ("%d", new[i]);
    }


    return 0;
}
