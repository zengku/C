/*
    ��дinput()��output()�������룬���5��ѧ�������ݼ�¼��
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char sex[5];
    int  age;
} stu;

void input(stu *);
void output(stu *);

int main(int argc, char const *argv[])
{
    stu student[5];
    printf("������ 5 ��ѧ������Ϣ������ �Ա� ���䣺\n");
    input(student);
    printf("5 ��ѧ������Ϣ���£�\n���� �Ա� ����\n");
    output(student);

    // system("pause");
    
    return 0;
}

void input(stu *student)
{
    for (int i = 0; i < 5; i++) {
        // scanf("%s", student->name);
        // scanf("%s", student->sex);
        // scanf("%d", student->age);
        scanf("%s %s %d", student[i].name, student[i].sex, &student[i].age);
    }
}

void output(stu *student)
{
    for (int i = 0; i < 5; i++) {
        printf("%s %s %d\n", student[i].name, student[i].sex, student[i].age);
    }
}