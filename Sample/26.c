/*
    有两个磁盘文件A和B,各存放一行字母,要求把这两个文件中的信息合并
    （按字母顺序排列），输出到一个新文件C中。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    FILE *fpA = NULL;
    FILE *fpB = NULL;
    char buff[500] = {0};
    char buffA[255] = {0};
    char buffB[255] = {0};

    fpA = fopen("A.txt", "r");
    if (fpA == NULL) {
        exit(0);
    }
    fgets(buffA, 255, fpA);
    fclose(fpA);

    fpB = fopen("B.txt", "r");
    if (fpB == NULL) {
        exit(0);
    }
    fgets(buffB, 255, fpB);
    fclose(fpB);

    strcat(buff, buffA);
    strcat(buff, buffB);

    char tem;
    for (int i = strlen(buff) - 1; i > 1; i--) {
        for (int j = 0; j < i; j++) {
            if (buff[j] > buff[j + 1]) {
                tem = buff[j];
                buff[j] = buff[j + 1];
                buff[j + 1] = tem;                
            }
        }
    }

    fp = fopen("C.txt", "w");
    if (fp == NULL) {
        exit(0);
    }
    fprintf(fp, "%s", buff);
    fclose(fp);

    return 0;
}
