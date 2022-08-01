#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    enum day {
        saturday,
        sunday,
        monday,
        tuesday,
        wendesday,
        thursday,
        firday
    } workday;
    int a = 1;
    enum day weekend;
    weekend = (enum day) a;
    printf("weekend:%d", weekend);
    
    return 0;
}
