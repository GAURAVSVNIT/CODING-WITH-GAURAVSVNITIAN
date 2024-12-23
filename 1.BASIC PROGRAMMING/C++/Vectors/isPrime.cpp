#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) 
{
    if (num <= 1) return false;
    
    for (int i = 2; i<= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimeNumbers(int num) 
{
    for (int i = 1; i <= sqrt(num); i++) 
    {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
     for (int i = 1; i <= sqrt(num); i++) 
    {
        if (isPrime(i)) {
            cout << num/i << " ";
        }
    }

    cout << endl;
} 

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) 
    {
        cout << number << " is a prime number." <<endl;
    } else {
        cout << number << " is not a prime number." <<endl;
    }
    cout << "Prime numbers between 1 and " << number << " are: ";
    printPrimeNumbers(number);

    return 0;
}