#include <stdio.h>

#define LINE    2
#define COLUMN  3

int main(void)
{
    float a[LINE][COLUMN];
    float b[COLUMN][LINE];
    int i, j;

    printf ("������ %d*%d �����Ԫ�أ�\n", LINE, COLUMN);
    for (i = 0; i < LINE; i++) {
        for (j = 0; j < COLUMN; j++) {
            scanf ("%f", &a[i][j]);
        }
    }

    printf ("ԭ����������飺\n");
    for (i = 0; i < LINE; i++) {
        for (j = 0; j < COLUMN; j++) {
            printf ("%.f  ", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf ("\n");
    }

    // for (i = 0; i < LINE; i++) {
    //     for (j = 0; j < COLUMN; j++) {
    //         b[j][i] = a[i][j];
    //     }
    // }

    printf ("����������飺\n");
    for (i = 0; i < COLUMN; i++) {
        for (j = 0; j < LINE; j++) {
            printf ("%.f  ", b[i][j]);
        }
        printf ("\n");
    }


    return 0;
}