//70) PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR 
//ELEMENT IN THE ARRAY.

#include <stdio.h>

int main()
{
    int arr[10];

    // Reading 10 integers into the array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing the occurrence of any particular element
    int element;
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    printf("The occurrence of the element %d is %d\n", element, count);
    return 0;
}