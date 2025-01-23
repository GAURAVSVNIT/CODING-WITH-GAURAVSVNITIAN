#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define MAIN_SIZE 20

void printArray(int arr[], int size);
void printAddresses(int arr[], int size);
void insertAtEnd(int arr[], int *size, int value);
void insertAtBeginning(int arr[], int *size, int value);
void insertAtPosition(int arr[], int *size, int value, int position);
void modifyAtEnd(int arr[], int size, int value);
void modifyAtBeginning(int arr[], int value);
void modifyAtPosition(int arr[], int size, int value, int position);
void deleteFromEnd(int arr[], int *size);
void deleteFromBeginning(int arr[], int *size);
void deleteFromPosition(int arr[], int *size, int position);
void reverseWithTempArray(int arr[], int size);
void reverseInPlace(int arr[], int size);
void copyToMainArray(int subArray[], int subSize, int mainArray[], int *mainSize);
void mergeArrays(int arr1[], int arr2[], int result[], int size);
int sumWithoutRecursion(int arr[], int size);
int sumWithRecursion(int arr[], int size);
int searchValue(int arr[], int size, int value);
void separateOddEven(int mainArray[], int mainSize, int oddArray[], int *oddSize, int evenArray[], int *evenSize);

int main() {
    int subArray1[SIZE], subArray2[SIZE], mainArray[MAIN_SIZE];
    int subSize1 = 0, subSize2 = 0, mainSize = 0;
    int choice, value, position;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at end\n2. Insert at beginning\n3. Insert at position\n");
        printf("4. Modify at end\n5. Modify at beginning\n6. Modify at position\n");
        printf("7. Delete from end\n8. Delete from beginning\n9. Delete from position\n");
        printf("10. Reverse with temp array\n11. Reverse in place\n12. Copy to Main Array\n");
        printf("13. Merge two arrays\n14. Sum of elements\n15. Search value\n");
        printf("16. Separate odd and even numbers\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the array in which you want to insert: ");
                int arrayChoice;
                scanf("%d", &arrayChoice);
                switch (arrayChoice)    
                {
                case /* constant-expression */:
                    /* code */
                    break;
                
                default:
                    break;
                }
                break;

            case 2:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                insertAtBeginning(subArray1, &subSize1, value);
                printArray(subArray1, subSize1);
                break;

            case 3:
                printf("Enter value and position to insert: ");
                scanf("%d %d", &value, &position);
                insertAtPosition(subArray1, &subSize1, value, position);
                printArray(subArray1, subSize1);
                break;

            case 4:
                printf("Enter value to modify at end: ");
                scanf("%d", &value);
                modifyAtEnd(subArray1, subSize1, value);
                printArray(subArray1, subSize1);
                break;

            case 5:
                printf("Enter value to modify at beginning: ");
                scanf("%d", &value);
                modifyAtBeginning(subArray1, value);
                printArray(subArray1, subSize1);
                break;

            case 6:
                printf("Enter value and position to modify: ");
                scanf("%d %d", &value, &position);
                modifyAtPosition(subArray1, subSize1, value, position);
                printArray(subArray1, subSize1);
                break;

            case 7:
                deleteFromEnd(subArray1, &subSize1);
                printArray(subArray1, subSize1);
                break;

            case 8:
                deleteFromBeginning(subArray1, &subSize1);
                printArray(subArray1, subSize1);
                break;

            case 9:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteFromPosition(subArray1, &subSize1, position);
                printArray(subArray1, subSize1);
                break;

            case 10:
                reverseWithTempArray(subArray1, subSize1);
                printArray(subArray1, subSize1);
                break;

            case 11:
                reverseInPlace(subArray1, subSize1);
                printArray(subArray1, subSize1);
                break;

            case 12:
                copyToMainArray(subArray1, subSize1, mainArray, &mainSize);
                printArray(mainArray, mainSize);
                break;

            case 13:
                mergeArrays(subArray1, subArray2, mainArray, SIZE);
                printArray(mainArray, SIZE * 2);
                break;

            case 14:
                printf("Sum without recursion: %d\n", sumWithoutRecursion(subArray1, subSize1));
                printf("Sum with recursion: %d\n", sumWithRecursion(subArray1, subSize1));
                break;

            case 15:
                printf("Enter value to search: ");
                scanf("%d", &value);
                position = searchValue(subArray1, subSize1, value);
                if (position != -1)
                    printf("Value found at position %d\n", position);
                else
                    printf("Value not found\n");
                break;

            case 16: {
                int oddArray[SIZE], evenArray[SIZE], oddSize = 0, evenSize = 0;
                separateOddEven(mainArray, mainSize, oddArray, &oddSize, evenArray, &evenSize);
                printf("Odd Array: ");
                printArray(oddArray, oddSize);
                printf("Even Array: ");
                printArray(evenArray, evenSize);
                break;
            }

            case 0:
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function definitions go here (implement each as per the required functionality)

void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printAddresses(int arr[], int size) {
    printf("Memory addresses of elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %p\n", arr[i], (void*)&arr[i]);
    }
}

void insertAtEnd(int arr[], int *size, int value) {
    if (*size >= SIZE) {
        printf("Array is full, cannot insert.\n");
        return;
    }
    arr[*size] = value;
    (*size)++;
}

void insertAtBeginning(int arr[], int *size, int value) {
    if (*size >= SIZE) {
        printf("Array is full, cannot insert.\n");
        return;
    }
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    (*size)++;
}

void insertAtPosition(int arr[], int *size, int value, int position) {
    if (*size >= SIZE) {
        printf("Array is full, cannot insert.\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}

void modifyAtEnd(int arr[], int size, int value) {
    if (size == 0) {
        printf("Array is empty, cannot modify.\n");
        return;
    }
    arr[size - 1] = value;
}

void modifyAtBeginning(int arr[], int value) {
    if (arr == NULL) {
        printf("Array is empty, cannot modify.\n");
        return;
    }
    arr[0] = value;
}

void modifyAtPosition(int arr[], int size, int value, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position.\n");
        return;
    }
    arr[position] = value;
}

void deleteFromEnd(int arr[], int *size) {
    if (*size == 0) {
        printf("Array is empty, cannot delete.\n");
        return;
    }
    (*size)--;
}

void deleteFromBeginning(int arr[], int *size) {
    if (*size == 0) {
        printf("Array is empty, cannot delete.\n");
        return;
    }
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteFromPosition(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty, cannot delete.\n");
        return;
    }
    if (position < 0 || position >= *size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void reverseWithTempArray(int arr[], int size) {
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[size - 1 - i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

void reverseInPlace(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void copyToMainArray(int subArray[], int subSize, int mainArray[], int *mainSize) {
    if (subSize + *mainSize > MAIN_SIZE) {
        printf("Main array does not have enough space.\n");
        return;
    }
    for (int i = 0; i < subSize; i++) {
        mainArray[*mainSize] = subArray[i];
        (*mainSize)++;
    }
}

void mergeArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i];
        result[size + i] = arr2[i];
    }
    for (int i = 0; i < 2 * size - 1; i++) {
        for (int j = 0; j < 2 * size - i - 1; j++) {
            if (result[j] < result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
}

int sumWithoutRecursion(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int sumWithRecursion(int arr[], int size) {
    if (size == 0) return 0;
    return arr[size - 1] + sumWithRecursion(arr, size - 1);
}

int searchValue(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) return i;
    }
    return -1;
}

void separateOddEven(int mainArray[], int mainSize, int oddArray[], int *oddSize, int evenArray[], int *evenSize) {
    for (int i = 0; i < mainSize; i++) {
        if (mainArray[i] % 2 == 0) {
            evenArray[*evenSize] = mainArray[i];
            (*evenSize)++;
        } else {
            oddArray[*oddSize] = mainArray[i];
            (*oddSize)++;
        }
    }
}