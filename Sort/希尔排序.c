/*
    希尔排序也称递减增量排序算法，是插入排序的一种更高效的改进版本。
    希尔排序是非稳定排序算法。相较于插入排序优点如下：
    插入排序在对几乎已经排好序的数据操作时，效率高，即可以达到线性排序的效率；
    但插入排序一般来说时低效的，因为插入排序每次只能将数据移到一位。
*/
#include <stdio.h>

void shell_sort(int arr[], int len)
{
    int gap, i, j;
    int temp;

    for (gap = len >> 1; gap > 0; gap = gap >> 1) {
        for (i = gap; i < len; i++) {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap) {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {22, 34, 2, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr)/sizeof(*arr);

    shell_sort(arr, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}