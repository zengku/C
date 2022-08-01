/*
    在区间中随机挑选一个元素作基准，将小于基准的元素放在基准之前，
    大于基准的元素放在基准之后，再分别对小数区与大数区进行排序。
*/
#include <stdio.h>

typedef struct _Range {
    int start;
    int end;
} Range;

Range new_Range(int s, int e)
{
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort(int arr[], const int len)
{
    if (len <= 0) {
        return;     // 避免len等于负值引发段错误
    }
    // r[]模拟列表，p为数量，r[p++]为push，r[--p]为pop且取得元素

    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len - 1);
    while (p) {
        Range range = r[--p];
        if (range.start >= range.end) {
            continue;
        }
        int mid = arr[(range.start + range.end) / 2];   // 选取中间点为基准点
        int left = range.start;
        int right = range.end;
        do {
            while (arr[left] < mid) {
                ++left;
            }
            while (arr[right] > mid) {
                --right;
            }
            if (left <= right) {
                swap(&arr[left], &arr[right]);
                left++;
                right--;
            }
        } while (left <= right);

        if (range.start < right) {
            r[p++] = new_Range(range.start, right);
        }
        if (range.end > left) {
            r[p++] = new_Range(left, range.end);
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {22, 34, 1, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int)sizeof(arr)/sizeof(*arr);

    quick_sort(arr, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}