/* 
 * ĳ��˾ʹ�ù��õ绰�������ݣ������� 4 λ���������ڴ��ݹ������Ǽ��ܵģ�
 * ���ܹ����ǣ�
 * ÿλ���ֶ����� 5�� Ȼ���ü��� 5 ������ֳ��� 10 ��������������֣�
 * �ٽ��� 1 λ�͵� 4 λ�������� 2 λ�͵� 3 λ������ 
 */

#include <stdio.h>

int main()
{
    int old;
    int new[4] = {0};
    int i;
    int temp;

    printf ("������һ�� 4 λ����������");
    scanf ("%d", &old);

    /* ���ݴ��� */
    new[0] = old / 1000;
    new[1] = old / 100 % 10;
    new[2] = old / 10 % 10;
    new[3] = old % 10;

    for (i = 0; i < 4; i++) {
        new[i] += 5;
        new[i] %= 10;
    }

    temp = 0;
    for (i = 0; i < 3 / 2; i++) {
        temp = new[i];
        new[i] = new[3 - i];
        new[3 - i] = temp;
    }

    for (i = 0; i < 4; i++) {    
        printf ("%d", new[i]);
    }


    return 0;
}
