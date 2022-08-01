/*
    输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
*/
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int compare(int a[], int m)
{
    for (int i = 0; i < m; i++) {
        if (a[i] > a[0]) {
            swap(&a[i], &a[0]);
        }
    }

    for (int i = 0; i < m; i++) {
        if (a[i] < a[m - 1]) {
            swap(&a[i], &a[m - 1]);
        }
    }
    
    return 0;
}

int main(int argc, char const *argv[])
{
    int m, a[6];
    printf("请输入6个整数：\n");
    for (m = 0; m <= 5; m++) {
        scanf("%d", &a[m]);
    }
    compare(a, 6);
    for (m = 0; m < 6; m++) {
        printf(" %d ", a[m]);
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int a[5], i, *max, *min, t;

//     printf("please input five numbers:\n");
//     for(i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     max = min = a;
//     for(i = 0; i < 4; i++)
//     {
//         if(*max < a[i + 1])
//         {
//             max = &a[i + 1];
//         }
//         if(*min > a[i +1])
//         {
//             min = &a[i + 1];
//         }
//     }
//     if(a[max - a] == a[4] && a[min - a] == a[0])
//     {
//         t = a[0];
//         a[0] = a[max - a];
//         a[max - a] = t;
//     }
//     else
//     {
//         t = a[min -a];
//         a[min - a] = a[4];
//         a[4] = t;
//         t = a[max - a];
//         a[max - a] = a[0];
//         a[0] = t;
//     }
//     for(i = 0; i < 5; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }