#include <iostream>
using namespace std;
int main() 
{
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest_missing = 1;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == smallest_missing) 
        {
            smallest_missing++;
        }
    }

    std::cout << "The smallest missing positive element is: " << smallest_missing << std::endl;
    return 0;
}
