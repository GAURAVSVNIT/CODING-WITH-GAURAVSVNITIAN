// 88) WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS
#include <stdio.h>
void copy(int *p1, int *p2)
{
    for (int i = 0; i < 10; i++)
    {
        *(p2 + i) = *(p1 + i);
    }
    printf("Elements of second array are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(p2 + i));
    }
}
int main()
{
    int arr1[10], arr2[10], i;
    printf("Enter elements of first array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int *p1 = arr1, *p2 = arr2;
    copy(p1, p2);
    return 0;
}