#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    enum color {red = 1, greed, blue};

    enum color favorite_color;

    printf("��������ϲ������ɫ��(1.red, 2.greed, 3.blue):");
    scanf("%u", &favorite_color);

    switch (favorite_color)
    {   
    case red:
        printf("��ϲ������ɫ�Ǻ�ɫ");
        break;
    case greed:
        printf("��ϲ������ɫ����ɫ");
        break;
    case blue:
        printf("��ϲ������ɫ����ɫ");
        break;
    default:
        printf("��û��ѡ����ϲ������ɫ");
    }

    return 0;
}
