/*
    �����ѧ����ÿ��ѧ����3�ſεĳɼ����Ӽ���������������
    ������ѧ���ţ����������ſγɼ����������ƽ���ɼ���
    ��ԭ�е����ݺͼ������ƽ����������ڴ����ļ�"stud"�С�
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

// TODO:�ļ�����
int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    struct stu std[5];

    printf("������������ѧ���ţ����ſγɼ���\n");
    
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

