# Write a code for backward working of count(), replace(), rindex() and rfind() functions of string in python.

def find(input_string, search_string, start, end):
    index = -1
    for i in range(start, end):
        if input_string[i:i+len(search_string)] == search_string:
            index = i
            break
    if index == -1:
        print("String not found in the input string.")
    else:
        print(f"Index of the string is: {index}")

def count(input_string, search_string, start, end):
    count = 0
    for i in range(start, end):
        if input_string[i:i+len(search_string)] == search_string:
            count += 1
    print(f"Count of the string is: {count}")

def replace(input_string, search_string, replace_string, start, end):
    new_string = ""
    i = start
    while i < end:
        if input_string[i:i+len(search_string)] == search_string:
            new_string += replace_string
            i += len(search_string)
        else:
            new_string += input_string[i]
            i += 1
    new_string += input_string[end:]
    print(f"New string is: {new_string}")

def rfind_index(input_string, search_string, start, end):
    index = -1
    for i in range(end - len(search_string), start - 1, -1):
        if input_string[i:i+len(search_string)] == search_string:
            index = i
            break
    if index == -1:
        print("String not found in the input string.")
    else:
        print(f"Index of the string in reverse order is: {index}")

def menu():
    print("\nMenu:")
    print("1. Find")
    print("2. Count")
    print("3. Replace")
    print("4. Reverse Find Index")
    print("5. Exit")

input_string = input("Enter the string: ")
search_string = input("Enter the string to search: ")
print(f"Input string length: {len(input_string)}")
start = int(input("Enter the start index: "))
end = int(input("Enter the end index: "))

while True:
    menu()
    choice = int(input("Enter your choice: "))
    
    match choice:
        case 1:
            find(input_string, search_string, start, end)
        case 2:
            count(input_string, search_string, start, end)
        case 3:
            replace_string = input("Enter the string to replace: ")
            replace(input_string, search_string, replace_string, start, end)
        case 4:
            rfind_index(input_string, search_string, start, end)
        case 5:
            print("Exiting the program.")
            break
        case _:
            print("Invalid choice. Please try again.")