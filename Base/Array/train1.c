/* 
 * ��һ�� 3*3 �����飬�������е����ֵ����Сֵ���ܺͺ�ƽ��ֵ����������ֵ��
 * ��Сֵ��λ�� 
 */

#include <stdio.h>

int main()
{
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 0, 9}};
    int i, j;
    int max1, max2, min1, min2;
    int max, min, sum;

    max = array[0][0];
    min = array[0][0];
    sum = 0;
    max1 = 0;
    max2 = 0;
    min1 = 0;
    min2 = 0;
    printf ("3*3 ����:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf ("%4d", array[i][j]);
            if (max < array[i][j]) {
                max = array[i][j];
                max1 = i;
                max2 = j;
            }
            if (min > array[i][j]) {
                min = array[i][j];
                min1 = i;
                min2 = j;
            }
            sum += array[i][j];
        }
        printf ("\n");
    }
    printf ("����������ֵ��%d, ���ڸ�����λ��Ϊ [%d][%d]\n", max, max1, max2);
    printf ("���������Сֵ��%d, ���ڸ�����λ��Ϊ [%d][%d]\n", min, min1, min2);
    printf ("��������ܺͣ�%d\n", sum);
    printf ("�������ƽ��ֵ��%.2f\n", ((float)sum/(3*3)));



    return 0;
}