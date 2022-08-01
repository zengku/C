#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[100];

    strcpy(name, "Zara Ali");

    char *description = (char *)malloc(30 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student.");
    }
    
    // 假设您想要存储更大的描述信息
    description = (char *)realloc(description, 100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcat(description, "She is in class 10th.");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);

    free(description);
    description = NULL;

    return 0;
}
