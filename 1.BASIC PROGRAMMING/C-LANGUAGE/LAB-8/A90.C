//90) Find Length of a Given String Including and Excluding Spaces Using Pointers
#include <stdio.h>

void findStringLength(char *str, int *ls, int *lsw) {
    *ls = 0;
    *lsw = 0;

    while (*str != '\0') {
        (*ls)++;
        if (*str != ' ') {
            (*lsw)++;
        }
        str++;
    }
}

int main() {
    char str[] = "Hello World";
    int ls, lsw;

    findStringLength(str, &ls, &lsw);

    printf("Length including spaces: %d\n", ls);
    printf("Length excluding spaces: %d\n", lsw);

    return 0;
}
