/*
    �ж� 101 �� 200 ֮���������
*/
#include <stdio.h>
 
int main()
{
    int i,j;
    int count=0;
    
    for (i=101; i<=200; i++) 
    {
        for (j=2; j<i; j++) 
        {
        // ��� j �ܱ� i ����������ѭ��
            if (i%j==0) 
                break;
        }
        // �ж�ѭ���Ƿ���ǰ��������� j<i ˵���� 2~j ֮��,i �п���������
        if (j>=i) 
        {
            count++;
            printf("%d ",i);
        // ���У��� count ������ÿ���������
            if (count % 5 == 0) 
            printf("\n");
        }
    }    
    return 0;
}