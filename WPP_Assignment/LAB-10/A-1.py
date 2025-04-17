import random
import matplotlib.pyplot as plt
import numpy as np

# Check if the board is valid (no two queens attacking diagonally)
def is_valid(board):
    n = len(board)
    for i in range(n):
        for j in range(i + 1, n):
            if abs(board[i] - board[j]) == abs(i - j):
                return False
    return True

# Generate a valid board
def generate_valid_board():
    n = 8
    board = list(range(n))
    while True:
        random.shuffle(board)
        if is_valid(board):
            return board

# Plot the board using matplotlib
def plot_board(board):
    n = len(board)
    board_matrix = np.zeros((n, n))
    
    # Create a checkerboard pattern
    for i in range(n):
        for j in range(n):
            if (i + j) % 2 == 0:
                board_matrix[i][j] = 1

    fig, ax = plt.subplots()
    ax.imshow(board_matrix, cmap='gray')

    # Place queens
    for i in range(n):
        ax.text(board[i], i, '♛', ha='center', va='center', fontsize=24, color='red')

    # Remove ticks
    ax.set_xticks([])
    ax.set_yticks([])
    ax.set_title("8-Queens Solution", fontsize=16)
    plt.show()

# Generate and plot
solution = generate_valid_board()
print("One Valid Solution:", solution)
plot_board(solution)
