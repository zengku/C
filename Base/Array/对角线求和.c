#include <stdio.h>

#define LINE    3
#define COLUMN  3

int main(void)
{
    int matrix[LINE][COLUMN] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, sum;

    for (i = 0; i < LINE; i++) {
        for (j = 0; j < COLUMN; j++) {
            printf ("%4d", matrix[i][j]);
        }
        printf ("\n");
    }

    sum = 0;
    for (i = 0; i < LINE; i++) {
        sum += matrix[i][i];
    }
    printf("对角线元素和为 %d\n", sum);


    return 0;
}