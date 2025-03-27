# A magic square is an N×N grid of numbers in which the entries in each row, column and 
# main diagonal sum to the same number (equal to N(N^2+1)/2). Create a magic square for 
# N=4, 5, 6, 7, 8

import numpy as np
import math
import random


def generate_magic_square(n):
    magic_square = np.zeros((n, n), dtype=int)
    num = 1
    i, j = 0, n // 2

    while num <= n * n:
        magic_square[i, j] = num
        num += 1
        new_i, new_j = (i - 1) % n, (j + 1) % n

        if magic_square[new_i, new_j]:
            i += 1
        else:
            i, j = new_i, new_j

    return magic_square

def print_magic_square(magic_square):
    n = magic_square.shape[0]
    for i in range(n):
        for j in range(n):
            print(f"{magic_square[i, j]:2d}", end=" ")
        print()
    print()


def main():
    n = int(input("Enter the size of the magic square (N >= 4): "))
    if n < 4:
        print("N must be greater than or equal to 4.")
        return

    magic_square = generate_magic_square(n)
    print("Magic Square:")
    print_magic_square(magic_square)

if __name__ == "__main__":
    main()
