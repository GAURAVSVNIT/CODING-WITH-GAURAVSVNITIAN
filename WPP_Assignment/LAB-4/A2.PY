# 2. Sherlock and Squares
# Watson gives two integers A & B to Sherlock and asks if he can count the number of square
# integers between A and B (both inclusive).
# A square integer is an integer which is the square of any integer.
# For example: 1,4,9,16 are some of the square integers as they are squares of 1,2,3,4 respectively.
# Input Format:
# First line contains T, the number of test cases. T test case follow, each in a newline.
# Each test case contains two space separated integers denoting A and B.
# Output Format:
# For each test case, print the required answer in a new line.
# Constraints:
# 1 <= T <=100
# 1 <= A <= B <= 109
# Sample Input
# 2
# 3 9
# 17 24
# Sample Output
# 2
# 0
# Explanation
# In the first test case, 4 and 9 are the square numbers.
# In the second test case no square number exist between 17 and 24(both inclusive).

def sherlock_and_squares(a, b):
    count = 0
    store=[]
    for i in range(a, b + 1):
        if str(int(i ** 0.5)).isnumeric() and int(i ** 0.5) ** 2 == i:
            count += 1
    store.append(count)
    return store[0]

if __name__ == '__main__':
    t = int(input("Enter the number of test cases: "))
    for _ in range(t):
        a, b = map(int, input("Enter the values of A and B: ").split())
        print(sherlock_and_squares(a, b))