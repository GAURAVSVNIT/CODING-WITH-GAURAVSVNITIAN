/* This program replaces each element of an array with the product of its adjacent elements.
   Access the array elements and structures using pointers instead of subscript notation. */

#include <stdio.h>
#include <stdlib.h>

// Define a structure with two integer pointers
typedef struct {
    int *a;
    int *b;
} str;

int main() {
    // Allocate memory for the structure
    str *s = (str *)malloc(sizeof(str));
    int n;
    
    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Allocate memory for the arrays within the structure
    s->a = (int *)malloc(n * sizeof(int));
    s->b = (int *)malloc(n * sizeof(int));
    
    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        // Use pointer notation to access array elements
        scanf("%d", (s->a + i));
    }
    
    // Replace odd elements with the product of their adjacent elements
    for (int i = 0; i < n; i++) 
    {
        if (i % 2 == 0 || i>=n-1)
        {
            *(s->b + i) = *(s->a + i);
        }
        else
        {
            *(s->b + i) = *(s->a + i - 1) * *(s->a + i + 1);
        }   
    }
    
    // Print the modified array
    printf("Modified array: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *(s->b + i));
    }
    
    // Free the allocated memory
    free(s->a);
    free(s->b);
    free(s);
    
    return 0;
}
