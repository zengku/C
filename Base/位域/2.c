#include <stdio.h>
#include <string.h>

struct {
    unsigned int age : 3;
} Age;

int main(int argc, char const *argv[])
{
    Age.age = 4;
    printf("Sizeof(Age) : %d\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);

    Age.age = 7;
    printf("Age.age : %d\n", Age.age);

    Age.age = 8;    // ?????Ƴ???
    printf("Age.age : %d\n", Age.age);

    return 0;
}
