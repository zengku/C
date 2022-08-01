// 预定义宏
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("File: %s\n", __FILE__);     // 当前文件名
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__); 
    printf("Line: %d\n", __LINE__);     // 当前行
    printf("ANSI: %d\n", __STDC__);     // 当编译器以ANSI标编译时，则定义为 1。

    return 0;
}
