// 首先在末排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，
// 再从剩余末排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。

#include <stdio.h>

void selection_sort(int a[], int len)
{
    int i, j, temp;

    for (i = 0; i < len - 1; i++) {
        int min = i;    // 记录最小值
        for (j = i + 1; j < len; j++) {    // 访问末排序的元素
            if (a[j] < a[min]) {    // 找到目前最小值
                min = j;        // 记录最小值
            }
        }
        if (min != i) {
            temp = a[min];    // 交换两个变量
            a[min] = a[i];
            a[i] = temp;
        }
        /* swap(&a[min], &a[i]); */    // 使用自定义函数交换
    }
}

/*
void swap(int *a, int *b)   // 交换两个变量
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/

int main(int argc, char const *argv[])
{
    int arr[] = {22, 34, 1, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr) / sizeof(*arr);

    selection_sort(arr, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}