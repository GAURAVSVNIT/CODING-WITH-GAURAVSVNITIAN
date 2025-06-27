# Problem: Codedocs Admin Kidnap
# When Codedocs Admin was visiting a fair in India, he met a magician. The magician had N boxes (numbered 1 through N) and a gold coin. He challenged Admin to play a game with him; if Admin won the game, he could have the coin, but if he lost, the magician would kidnap Admin.
# At the beginning of the game, the magician places the gold coin into the X-th box. Then, he performs S swaps. To win, Admi needs to correctly identify the position of the coin after all swaps.
# In each swap, the magician chooses two boxes A and B, moves the contents of box A (before the swap) to box B and the contents of box B (before the swap) to box A
# Input
# The first line of the input contains a single integer T denoting the number of test cases. The description of test cases follows. The first line of each test case contains three space-separated integers N, X and S.
# S lines follow. Each of these lines contains two space-separated integers A and B
# 1=T=100
# denoting a pair of swapped boxes.
# Output
# For each test case, print a single line containing one integer the number of the box containing the gold coin after all swaps
# are performed.
# Constraints
# 2=N=105
# 1=S=104
# 1=X,A,B=N
# A?B
# the sum of S for all test cases does not exceed 2*10 SAMPLE INPUT
# 1
# 5 24
# 4 2
# 34
# 32
# 1 2
# SAMPLE OUTPUT
# 1
# Explanation
# Example case 1:
# after the first swap, the coin is in box 4 after the second swap, the coin is in box 3 after the third swap, the coin is in box 2 after the fourth swap, the coin is in box 1

# Solution:

t=int(input())
for i in range(t):
    n,x,s=map(int,input().split())
    for j in range(s):
        a,b=map(int,input().split())
        if x==a:
            x=b
        elif x==b:
            x=a
    print(x)
