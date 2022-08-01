/*
    ϣ������Ҳ�Ƶݼ����������㷨���ǲ��������һ�ָ���Ч�ĸĽ��汾��
    ϣ�������Ƿ��ȶ������㷨������ڲ��������ŵ����£�
    ���������ڶԼ����Ѿ��ź�������ݲ���ʱ��Ч�ʸߣ������Դﵽ���������Ч�ʣ�
    ����������һ����˵ʱ��Ч�ģ���Ϊ��������ÿ��ֻ�ܽ������Ƶ�һλ��
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