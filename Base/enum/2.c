#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    enum color {red = 1, greed, blue};

    enum color favorite_color;

    printf("请输入你喜欢的颜色：(1.red, 2.greed, 3.blue):");
    scanf("%u", &favorite_color);

    switch (favorite_color)
    {   
    case red:
        printf("你喜欢的颜色是红色");
        break;
    case greed:
        printf("你喜欢的颜色是绿色");
        break;
    case blue:
        printf("你喜欢的颜色是蓝色");
        break;
    default:
        printf("你没有选择你喜欢的颜色");
    }

    return 0;
}
