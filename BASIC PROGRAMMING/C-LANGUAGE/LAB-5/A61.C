//PROGRAM TO SORT (BUBBLE SORT) AN ARRAY.

#include <stdio.h>  

int main()  
{  
    int arr[10], i, j, temp;  
    printf("Enter 10 integers:\n");  
    for(i = 0; i < 10; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    for(i = 0; i < 10; i++)  
    {  
        for(j = 0; j < 9; j++)  
        {  
            if(arr[j] > arr[j+1])
            {  
                temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp;  
            }  
        }  
    }   
    printf("Sorted array: ");  
    for(i = 0; i < 10; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}
