# Code to find index of string in reverse order without inbuilt function    

def find_index(input_string, search_string, start, end):
    index = -1
    for i in range(end , start, -1):
        if input_string[i:i+len(search_string)] == search_string:
            index = i
            break
    if index == -1:
        print("String not found in the input string.")

    print(f"Index of the string in reverse order is: {index}")

# def spilt_string(input_string):

input_string = input("Enter the string: ")
search_string = input("Enter the string to search: ")
print(f"Input string length : {len(input_string)}" )
start=int(input("Enter the start index: "))
end=int(input("Enter the end index: ")) 
find_index(input_string, search_string, start, end)


# replace = repalce_string(input_string, search_string, "X")











