//  Given	a	word w,rearrange the letters of w to construct another word s in such a	way	that, is lexicographically	greater	than w
// .
//  Input	Format	
// t
//  The	first	line	of	input	contains	,	number	of	test	cases.	Each	of	the	next		lines	contains	.
//  t
//  Constraints	
// 1 ≤t≤105
//  1 ≤|w| ≤100
//  w
//  will	contain	only	lower	case	english	letters	and	its'	length	will	not	exceed	
// Output	Format	
// w
//  w
//  100
//  .
//  For	each	testcase,	output	a	string	lexicographically	bigger	than		in	a	separate	line.	In	case	of	multiple	possible	answers,	print
//  the	lexicographically	smallest	one	and	if	no	answer	exists,	print	
// no	answer

#include <stdio.h>
#include <string.h>

void swap(char str[], int i, int j) 
{
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void reverse(char str[], int start, int end) 
{
    while (start < end) 
    {
        swap(str, start, end);
        start++;
        end--;
    }
}

int main() 
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        char w[101];
        scanf("%s", w);
        int len = strlen(w);
        int i = len - 2;

        // Find the rightmost character which is smaller than its next character
        while (i >= 0 && w[i] >= w[i + 1]) 
        {
            i--;
        }

        if (i >= 0) 
        {
            // Find the smallest character on the right of the pivot which is larger than w[i]
            int j = len - 1;
            while (w[j] <= w[i]) 
            {
                j--;
            }
            // Swap characters at i and j
            swap(w, i, j);
        }

        // Reverse the sequence from i+1 to end to get the next lexicographical permutation
        reverse(w, i + 1, len - 1);

        if (i == -1) 
        {
            printf("no answer\n");
        } 
        else 
        {
            printf("%s\n", w);
        }
    }
    return 0;
}