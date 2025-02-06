def smallestpalin(X, Y):
    str1=""
    str1 += '1' * (X // 2)
    str1 += '2' * (Y // 2)

    str2 = str1 + str1[::-1]

    return str2     
    

def main():
    T = int(input())
    test_cases = []

    for _ in range(T):
        X, Y = map(int, input().split())
        test_cases.append((X, Y))

    for X, Y in test_cases:
        print(smallestpalin(X, Y))

if __name__ == "__main__":
    main()

