# 3. Write a program that asks the user to enter a length in feet. The program should then give
# the user the option to convert from feet into inches, yards, miles, millimeters, centimeters,
# meters, or kilometers. Say if the user enters a 1, then the program converts to inches, if they
# enter a 2, then the program converts to yards, etc. While this can be done with if statements,
# it is much shorter with lists and it is also easier to add new conversions if you use lists.

length = float(input("Enter the length in feet: "))
print("Enter the number to convert into the following units:")
print("1.Feet -> Inches")
print("2.Feet -> Yards")
print("3.Feet -> Miles")
print("4.Feet -> Millimeters")
print("5.Feet -> Centimeters")
print("6.Feet -> Meters")
print("7.Feet -> Kilometers")
unit = int(input())
units = ["Inches", "Yards", "Miles", "Millimeters", "Centimeters", "Meters", "Kilometers"]
conversion = [12, 1/3, 1/5280, 304.8, 30.48, 0.3048, 0.0003048]
print(f"{length} Feet is equal to {length*conversion[unit-1]} {units[unit-1]}")