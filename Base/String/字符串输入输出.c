#include <stdio.h>

#define MSIZE   81

int main()
{
    char message[MSIZE];

    printf ("ͨ�� gets() �����ַ�����\n");
    gets (message);
    printf ("����ַ�����\n");
    puts (message);
    printf ("ͨ�� scanf() �����ַ�����\n");
    scanf ("%s", message);
    printf ("%����ַ�����\n");
    puts (message);

    return 0;
}