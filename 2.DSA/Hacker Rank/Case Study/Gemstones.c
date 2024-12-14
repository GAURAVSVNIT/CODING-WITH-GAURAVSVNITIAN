// Gem	Stones
//  John	has	discovered	various	rocks.	Each	rock	is	composed	of	various	elements,	and	each	element	is	represented	by	a	lowercase
//  latin	letter	from	'a'	to	'z'.	An	element	can	be	present	multiple	times	in	a	rock.	An	element	is	called	a	'gem-element'	if	it	occurs	at
//  least	once	in	each	of	the	rocks.
//  Given	the	list	of	N	rocks	with	their	compositions,	display	the	number	of	gem-elements	that	exist	in	those	rocks.
//  Input	Format	
// The	first	line	consists	of	N,	the	number	of	rocks.	
// Each	of	the	next	N	lines	contain	rocks'	composition.	Each	composition	consists	of	lowercase	letters	of	English	alphabet.
//  Output	Format	
// Print	the	number	of	gem-elements	that	are	common	in	these	rocks.	If	there	are	none,	print	0.
//  Constraints	
// 1	≤	N	≤	100	
// Each	composition	consists	of	only	small	latin	letters	('a'-'z').	
// 1	≤	Length	of	each	composition	≤	100

#include<stdio.h>
#include<string.h>

void remove_duplicate(char input[],char output[])
{
    int seen[256] = {0};
    int index = 0;
    
    for(int i=0;i<strlen(input);i++)
    {
        if(!seen[(unsigned char) input[i]])
        {
            seen[(unsigned char) input[i]] = 1;
            output[index++] = input[i];
        }
    }
    output[index] = '\0';
}


int main() 
{
    int N;
    scanf("%d",&N);  // Getting N value
    
    char arr[N][100]; // Declaring Array of Strings
    
    // Initializing Array of strings
    for(int i=0;i<N;i++)
    {
        scanf("%s",arr[i]);
    }
    
    // Declaring array with unique character strings
    char arr_u[N][100];
   
    //Calling function to get array of unique characters string 
    for(int i=0;i<N;i++)
    {
        remove_duplicate(arr[i],arr_u[i]);
    }
    
    /*
    for(int i=0;i<N;i++)
    {
        printf("\n%s",arr_u[i]);
    }
    */
    
    //Declaring 26 character array and initializing all elements as zero 
    int alpha[26];
    for(int i=0;i<26;i++)
    {
        alpha[i] = 0;
    }
    
    
    for(int i=0;i<N;i++)
    {
        int n = strlen(arr_u[i]); // length of string
        
        for(int j=0;j<n;j++)
        {
            switch(arr_u[i][j])
            {
                case 'a': 
                    alpha[0] ++;
                    break;
                case 'b': 
                    alpha[1] ++;
                    break;
                case 'c': 
                    alpha[2] ++;
                    break;
                case 'd': 
                    alpha[3] ++;
                    break;
                case 'e': 
                    alpha[4] ++;
                    break;
                case 'f': 
                    alpha[5] ++;
                    break;
                case 'g': 
                    alpha[6] ++;
                    break;
                case 'h': 
                    alpha[7] ++;
                    break;
                case 'i': 
                    alpha[8] ++;
                    break;
                case 'j': 
                    alpha[9] ++;
                    break;
                case 'k': 
                    alpha[10] ++;
                    break;
                case 'l': 
                    alpha[11] ++;
                    break;
                case 'm': 
                    alpha[12] ++;
                    break;
                case 'n': 
                    alpha[13] ++;
                    break;
                case 'o': 
                    alpha[14] ++;
                    break;
                case 'p': 
                    alpha[15] ++;
                    break;
                case 'q': 
                    alpha[16] ++;
                    break;
                case 'r': 
                    alpha[17] ++;
                    break;
                case 's': 
                    alpha[18] ++;
                    break;
                case 't': 
                    alpha[19] ++;
                    break;
                case 'u': 
                    alpha[20] ++;
                    break;
                case 'v': 
                    alpha[21] ++;
                    break;
                case 'w': 
                    alpha[22] ++;
                    break;
                case 'x': 
                    alpha[23] ++;
                    break;
                case 'y': 
                    alpha[24] ++;
                    break;
                case 'z': 
                    alpha[25] ++;
                    break;
            }
        }
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(alpha[i]==N)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}

