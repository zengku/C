#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;

    fp = fopen("E:/UserData/×ÀÃæ/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for puts...\n", fp);
    fclose(fp);

    return 0;
}
