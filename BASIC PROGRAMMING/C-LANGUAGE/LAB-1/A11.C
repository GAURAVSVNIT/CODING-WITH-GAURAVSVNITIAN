//11. PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME

#include <stdio.h>

int main() 
{
    int total_seconds, hours, minutes, seconds;

    // Input the total number of seconds
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours
    hours = total_seconds / 3600;

    // Calculate remaining minutes
    minutes = (total_seconds % 3600) / 60;

    // Calculate remaining seconds
    seconds = total_seconds % 60;

    // Output the time in HH:MM:SS format
    printf("Time is: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
