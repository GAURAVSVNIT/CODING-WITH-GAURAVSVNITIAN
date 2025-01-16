# Create the following lists using a for loop.
# (a) A list consisting of the integers 0 through 49
# (b) A list containing the squares of the integers 1 through 50.
# (c) The list ['a','bb','ccc','dddd', ...] that ends with 26 copies of the letter z.

# (a) A list consisting of the integers 0 through 49
list1 = []
for i in range(50):
    list1.append(i)
print(list1)

# (b) A list containing the squares of the integers 1 through 50.
list2 = []
for i in range(1, 51):
    list2.append(i**2)
print(list2)

# (c) The list ['a','bb','ccc','dddd', ...] that ends with 26 copies of the letter z.
list3 = []
for i in range(1,27):
    list3.append(chr(96+i)*i)
print(list3)