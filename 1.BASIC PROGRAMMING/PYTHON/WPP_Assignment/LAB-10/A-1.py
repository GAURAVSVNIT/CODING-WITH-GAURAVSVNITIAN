import numpy as np

N = 8
solutions = []

def is_safe(board, row, col):
    for i in range(row):
        if board[i] == col or \
           board[i] - i == col - row or \
           board[i] + i == col + row:
            return False
    return True

def solve(row, board):
    if row == N:
        solutions.append(board[:])
        return
    for col in range(N):
        if is_safe(board, row, col):
            board[row] = col
            solve(row + 1, board)

def print_board(board):
    grid = np.full((N, N), ".", dtype=str)
    for r in range(N):
        grid[r][board[r]] = "Q"
    for row in grid:
        print(" ".join(row))
    print()

if __name__ == "__main__":
    solve(0, [0]*N)
    print(f"Total solutions found: {len(solutions)}\n")
    for sol in solutions:
        print_board(sol)