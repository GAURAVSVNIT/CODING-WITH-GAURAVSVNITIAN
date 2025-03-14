# 3. Find Digits
# You are given a number N, you need to print the number of positions where digits exactly
# divides N.
# Input format
# The first line contains T (number of test cases followed by T lines each containing N).
# Constraints
# 1 <= T <= 15
# 0 <= N <= 1010
# Output Format
# For each test case print the number of positions in N where digits in that number exactly
# divides the number N in separate line.
# Input
# 2
# 12
# 13
# Output
# 2
# 1
# Explanation

# Test case 1:
# 2 digits in the number 12 divides the number exactly.
# Test case 2:
# Only 1 digit in the number 13 divides the number exactly.

# Solution:
t = int(input())
for i in range(t):
    n = int(input())
    count = 0
    for j in str(n):
        if int(j) != 0 and n % int(j) == 0:
            count += 1
    print(count)

# Output:
# 2