// 程序结构中包含多个开关量，只有 true/false变量
// 更好利用内存空间，可以定义变量的宽度来告诉编译器，您将只使用这些字节
#include <stdio.h>
#include <string.h>

struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

// 位域的值的类型只能为int、unsigned int、signed int三个类型，
struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

int main(int argc, char const *argv[])
{
    printf("Memory size occupied by status1 : %d\n", sizeof(status1));
    printf("Memory size occupied by status2 : %d\n", sizeof(status2));

    return 0;
}
