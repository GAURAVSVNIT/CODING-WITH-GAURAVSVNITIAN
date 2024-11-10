Sure! Here are the C programs for each of the questions using functions:

### 76) Check Whether a Number is Even or Odd
```c
#include <stdio.h>

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}
```

### 77) Check Whether a Number is Palindrome or Not
```c
#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}
```

### 78) Check Whether a Number is Armstrong or Not
```c
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, remainder;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    num = original;
    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
```

### 79) Exchange Values of Two Variables
```c
#include <stdio.h>

void exchange(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before exchange: a = %d, b = %d\n", a, b);
    exchange(&a, &b);
    printf("After exchange: a = %d, b = %d\n", a, b);
    return 0;
}
```

### 80) Generate and Print the First N Fibonacci Numbers
```c
#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}
```

### 81) Check Whether a Number is Prime
```c
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}
```

### 82) Calculate NCR Factorial
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("nCr = %d\n", nCr(n, r));
    return 0;
}
```

### 83) Find Maximum in an Array
```c
#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[10];
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Maximum value is: %d\n", findMax(arr, 10));
    return 0;
}
```

### 84) Read and Display Information of a Book
```c
#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

void readBook(struct Book *b) {
    printf("Enter title: ");
    scanf("%s", b->title);
    printf("Enter author: ");
    scanf("%s", b->author);
    printf("Enter pages: ");
    scanf("%d", &b->pages);
    printf("Enter price: ");
    scanf("%f", &b->price);
}

void displayBook(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b;
    readBook(&b);
    displayBook(b);
    return 0;
}
```

### 85) Check Whether a Character is a Vowel
```c
#include <stdio.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isVowel(ch))
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is not a vowel.\n", ch);
    return 0;
}
```

### 86) Find Length of a String
```c
#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length of the string is: %d\n", stringLength(str));
    return 0;
}
```

### 87) Display Information of Students with Marks Greater Than 500
```c
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[3];
};

void readStudent(struct Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollNo);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks for 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &s->marks[i]);
    }
}

void displayStudent(struct Student s) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += s->marks[i];
    }
    if (total > 500) {
        printf("Roll No: %d\n", s.rollNo);
        printf("Name: %s\n", s.name);
        printf("Total Marks: %d\n", total);
    }
}

int main() {
    struct Student students[10];
    for (int i = 0; i < 10; i++) {
        readStudent(&students[i]);
    }
    printf("Students with marks greater than 500:\n");
    for (int i = 0; i < 10; i++) {
        displayStudent(students[i]);
    }
    return 0;
}
```

Feel free to ask if you need any further explanations or modifications!

Source: Conversation with Copilot, 7/11/2024
(1) github.com. https://github.com/mandy8055/DataStructuresC/tree/3ff33343b584c9d985cfcb5a57d34fba0baa2625/Prime_Numbers%2Fbasic_prime.c.
(2) github.com. https://github.com/nitishgarg2002/DSA-assignments/tree/34ec3e77e6bb00bc2ab86d2960a18d9e53300c06/Ass3%2FQ4.cpp.
(3) github.com. https://github.com/tatevik-t/2020-rau-c/tree/2847fa73854be12ec69b508a5e00205eb364b23b/problems%2Ffunction-is-max-symmetric.c.
(4) github.com. https://github.com/nammi31/allMyCode/tree/4bc34d73e43d4c34ad7ff410ff358aa7ef0a8df9/Monk%20Takes%20a%20Walk.cpp.