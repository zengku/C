// ����ṹ�а��������������ֻ�� true/false����
// ���������ڴ�ռ䣬���Զ�������Ŀ�������߱�����������ֻʹ����Щ�ֽ�
#include <stdio.h>
#include <string.h>

struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

// λ���ֵ������ֻ��Ϊint��unsigned int��signed int�������ͣ�
struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

int main(int argc, char const *argv[])
{
    printf("Memory size occupied by status1 : %d\n", sizeof(status1));
    printf("Memory size occupied by status2 : %d\n", sizeof(status2));

    return 0;
}
