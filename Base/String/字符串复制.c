#include <stdio.h>

#define LSIZE   81

void strcopy(char [], char []);

int main()
{
    char message[LSIZE];
    char newMessage[LSIZE];

    printf ("输入字符串:");
    gets (message);
    strcopy (newMessage, message);
    puts (newMessage);

    return 0;
}

void strcopy(char string1[], char string2[])
{
    int i = 0;      // i 是下标

    while (string2[i] != '\0') {
        string1[i] = string2[i];
        i++;
    }
    string1[i] = '\0';      // 结束标志
}