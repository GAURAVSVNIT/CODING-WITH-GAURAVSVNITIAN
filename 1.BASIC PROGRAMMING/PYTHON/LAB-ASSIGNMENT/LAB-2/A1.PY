# 1. Write a program that asks the user to enter a word and then capitalizes every other letter of
# that word. So, if the user enters rhinoceros, the program should print rHiNoCeRoS.

word = input("Enter a word: ")
capitalized = ""
for i in range(len(word)):
    if i % 2 == 0:
        capitalized += word[i]
    else:
        capitalized += word[i].upper()
print(capitalized)
