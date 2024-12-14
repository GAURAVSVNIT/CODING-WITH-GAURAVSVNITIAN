//9. PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.

#include <stdio.h>

int main() 
{
    int hours, minutes, seconds;
    int total_seconds;

    // Input the time in hours, minutes, and seconds
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);

    // Convert time to total seconds
    total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    // Output the total seconds
    printf("Total time in seconds: %d\n", total_seconds);

    return 0;
}
