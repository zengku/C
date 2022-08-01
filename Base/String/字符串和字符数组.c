#include <stdio.h>

/* 字符数组和字符串在数组的范围内输入输出、修改等都是可行的，可以混合使用，
 * 需注意两种形式的长度不同
 */

int main()
{
    char c[] = "abc";

    printf ("%s\n", c);         // 输出字符串
    printf ("%c\n", c[0]);      // 输出 c[0]
    c[1] = 'w';                 
    printf ("%s\n", c);         // 修改 c[1] 字符为 w

    return  0;
}