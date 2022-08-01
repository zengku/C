#include <stdio.h>

#define MSIZE   81

int main()
{
    char message[MSIZE];

    printf ("通过 gets() 输入字符串：\n");
    gets (message);
    printf ("输出字符串：\n");
    puts (message);
    printf ("通过 scanf() 输入字符串：\n");
    scanf ("%s", message);
    printf ("%输出字符串：\n");
    puts (message);

    return 0;
}