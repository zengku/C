/*
    ͨ�������������У�����δ�������ݣ��������������дӺ���ǰɨ�裬�ҵ���Ӧλ��
    �����롣����������ʵ���ϣ�ͨ������in-place��������ڴӺ���ǰɨ������У�
    ��Ҫ������������Ԫ�������Ų�ƣ�Ϊ����Ԫ���ṩ����ռ䡣
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
