//89)WRITE A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF 
//SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY. 
#include <stdio.h>

void copyArrayReverse(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + (size - 1 - i));
    }
}

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int size = sizeof(source) / sizeof(source[0]);
    int destination[size];

    copyArrayReverse(source, destination, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}
