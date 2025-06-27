# PYTHON PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE 
value1 = int(input("Enter the first value: "))
value2 = int(input("Enter the second value: ")) 
print("Before Swapping: ")
print("Value1: ", value1)
print("Value2: ", value2)
value1 = value1 + value2
value2 = value1 - value2
value1 = value1 - value2
print("After Swapping: ")
print("Value1: ", value1)
print("Value2: ", value2)