/*
    通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置
    并插入。插入排序在实现上，通常采用in-place排序，因而在从后向前扫描过程中，
    需要反复把已排序元素逐步向后挪移，为最新元素提供插入空间。
*/
#include <stdio.h>

void insertion_sort(int arr[], int len)
{
    int i, j, temp;

    for (i = 1; i < len; i++) {
        temp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > temp; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {22, 34, 1, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr)/sizeof(*arr);

    insertion_sort(arr, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
