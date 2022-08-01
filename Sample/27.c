/*
    有五个学生，每个学生有3门课的成绩，从键盘输入以上数据
    （包括学生号，姓名，三门课成绩），计算出平均成绩，
    况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu {
    char  name[20];
    int   id;
    float math;
    float English;
    float C;
    float average;
};

// TODO:文件操作
int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    struct stu std[5];

    printf("请输入姓名，学生号，三门课成绩：\n");
    
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f %f %f", std[i].name, &(std[i].id), &(std[i].math), 
            &(std[i].English), &(std[i].C));
        std[i].average = (std[i].math + std[i].English + std[i].C)/3;
    }

    fp = fopen("stud.txt", "w");
    if (fp == NULL) {
        printf("error :cannot open file!\n");
        exit(0);
    }
    
    for (int i = 0; i < 5; i++) {
        fprintf(fp, "%s %d %f %f %f %f\n", std[i].name, std[i].id, std[i].math,
                std[i].English, std[i].C, std[i].average);
    }

    fclose(fp);

    
    return 0;
}

