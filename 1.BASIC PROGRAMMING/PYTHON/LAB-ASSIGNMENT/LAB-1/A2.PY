# Write a program that generates 100 random integers that are either 0 or 1. Then find the
# longest run of zeros, the largest number of zeros in a row. For instance, the longest run of
# zeros in [1,0,1,1,0,0,0,0,1,0,0] is 4.

from random import randint

list1 = []
for i in range(100):
    list1.append(randint(0,1))
print(list1)

max_count = 0
count = 0
for i in range(100):
    if list1[i] == 0:
        count += 1
    else:
        if count > max_count:
            max_count = count
        count = 0