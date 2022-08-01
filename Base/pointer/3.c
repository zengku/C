#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
    int var[] = {10, 100, 200};
    int i, *ptr;

    // 指针中的数组地址
    ptr = var;
    for (i = 0; i < MAX; i++) {
        printf("存储地址：var[%d] = %p\n", i, ptr);
        printf("存储值：var[%d] = %d\n", i, *ptr);

        // 指向下一个位置
        // 指针递增（递减），指向下一个（前一个）元素的存储单位
        // 跳跃的字节数取决于指针所指向变量数据类型长度，如：int 就是 4 个字节
        ptr++;
    }

    return 0;
}
