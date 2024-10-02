//8. EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO  CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES

#include <stdio.h>

int main() 
{
    long int total_seconds = 31558150;
    int days, hours, minutes, seconds;

    // Calculate the number of days
    days = total_seconds / 86400; // 1 day = 86400 seconds
    total_seconds = total_seconds % 86400;

    // Calculate the number of hours
    hours = total_seconds / 3600; // 1 hour = 3600 seconds
    total_seconds = total_seconds % 3600;

    // Calculate the number of minutes
    minutes = total_seconds / 60; // 1 minute = 60 seconds

    // Remaining seconds
    seconds = total_seconds % 60;

    // Output the results
    printf("Period of revolution in days, hours, minutes, and seconds:\n");
    printf("%d days, %d hours, %d minutes, %d seconds\n", days, hours, minutes, seconds);

    return 0;
}
