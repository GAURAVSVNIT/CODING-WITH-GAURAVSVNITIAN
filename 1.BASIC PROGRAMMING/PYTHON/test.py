# def smallestpalin(X, Y):
#     str1=""
#     str1 += '1' * (X // 2)
#     str1 += '2' * (Y // 2)

#     str2 = str1 + str1[::-1]

#     return str2     
    

# def main():
#     T = int(input())
#     test_cases = []

#     for _ in range(T):
#         X, Y = map(int, input().split())
#         test_cases.append((X, Y))

#     for X, Y in test_cases:
#         print(smallestpalin(X, Y))

# if __name__ == "__main__":
#     main()

def debug(func):
    def wrapper(*args, **kwargs):
        args_value = ': '.join(str(arg) for arg in args)
        kwargs_value = ', '.join(f"{k}={v}" for k, v in kwargs.
        items())
        print(f"calling: {func.__name__} with args {args_value} and kwargs {kwargs_value}")
        return func(*args, **kwargs)
    
    return wrapper

@debug
def hello():
    print("hello")

@debug
def greet(name, pname, fname, greeting="Hello"):
    print(f"{greeting}, {name},{fname},{pname}")

hello()
greet("chai", "sgah", "dgygsh", greeting="hanji")