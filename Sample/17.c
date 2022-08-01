/*
    编写input()和output()函数输入，输出5个学生的数据记录。
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
    printf("请输入 5 个学生的信息：姓名 性别 年龄：\n");
    input(student);
    printf("5 个学生的信息如下：\n姓名 性别 年龄\n");
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