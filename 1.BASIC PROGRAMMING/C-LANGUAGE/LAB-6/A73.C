// 73) An election is contested by 5 candidates. The candidate is numbered are 1 to 5 
// and the voting is done by marking the candidate number on the ballot paper. 
// Write a program to read the ballots and count the votes cast for each candidate 
// using an array variable count. In case, a number, read is outside the range 1 to 5, 
// the ballot should be considered as a ‘spoilt ballot’ and the program should also 
// count the number of spoilt ballots.

#include <stdio.h>

int main() {
    int count[6] = {0}; // Initialize count array with 0s, index 0 is not used
    int spoiltBallots = 0;
    int ballot;

    printf("Enter the number of ballots: ");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter ballot %d: ", i + 1);
        scanf("%d", &ballot);

        if (ballot >= 1 && ballot <= 5) {
            count[ballot]++;
        } else {
            spoiltBallots++;
        }
    }

    printf("Votes cast for each candidate:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Candidate %d: %d votes\n", i, count[i]);
    }

    printf("Number of spoilt ballots: %d\n", spoiltBallots);

    return 0;
}