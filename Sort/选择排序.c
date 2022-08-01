// ������ĩ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�ã�Ȼ��
// �ٴ�ʣ��ĩ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ��

#include <stdio.h>

void selection_sort(int a[], int len)
{
    int i, j, temp;

    for (i = 0; i < len - 1; i++) {
        int min = i;    // ��¼��Сֵ
        for (j = i + 1; j < len; j++) {    // ����ĩ�����Ԫ��
            if (a[j] < a[min]) {    // �ҵ�Ŀǰ��Сֵ
                min = j;        // ��¼��Сֵ
            }
        }
        if (min != i) {
            temp = a[min];    // ������������
            a[min] = a[i];
            a[i] = temp;
        }
        /* swap(&a[min], &a[i]); */    // ʹ���Զ��庯������
    }
}

/*
void swap(int *a, int *b)   // ������������
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