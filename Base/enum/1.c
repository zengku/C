#include <stdio.h>

// enum DAY {
//     MON = 1, TUE, WED, THU, FRI, SAT, SUN
// };
// enum season {a, b=3, c, d};
// û�ж�ֵ��Ԫ�أ���ֵΪǰһԪ�ؼ�һ��a=0,c=4,d=5

// enum DAY {
//     MON = 1, TUE, WED, THU, FRI, SAT, SUN
// };
// enum DAY day;

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
} Day;

// enum {
//     MON = 1, TUE, WED, THU, FRI, SAT, SUN
// } Day;

int main(int argc, char const *argv[])
{
    Day = WED;

    for (int Day = MON; Day <= SUN; Day++) {
        printf ("%d\n", Day);
    }

    return 0;
}
