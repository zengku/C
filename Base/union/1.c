#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data {
    int     i;
    float   f;
    char    str[20];
};

// int main(int argc, char const *argv[])
// {
//     union Data data;

//     printf("Memory size occupied by data: %d\n", sizeof(data));

//     data.i = 10;
//     data.f = 220.5;
//     strcpy(data.str, "C Programming");

//     // data.i and data.f false,同一时间只使用一个变量
//     printf("data.i : %d\n", data.i);
//     printf("data.f : %f\n", data.f);
//     printf("data.str : %s\n", data.str);

//     return 0;
// }

int main(int argc, char const *argv[])
{
    union Data data;

    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %f\n", data.f);
    
    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);

    return 0;
}

