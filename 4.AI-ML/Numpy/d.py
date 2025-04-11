import matplotlib.pyplot as plt
from itertools import permutations

def is_valid(queens):
    """Check if the given queen placement is valid (no diagonal attacks)."""
    n = len(queens)
    for i in range(n):
        for j in range(i + 1, n):
            if abs(queens[i] - queens[j]) == abs(i - j):  # Diagonal attack check
                return False
    return True

def brute_force_n_queens(n=8):
    """Generate all valid brute-force solutions for N-Queens."""
    solutions = []
    for perm in permutations(range(n)):  # Generate all column permutations
        if is_valid(perm):  # Check diagonal conflicts
            solutions.append(perm)
    return solutions

def plot_board(solution, ax):
    """Plot a single chessboard with the given solution."""
    n = len(solution)
    
    # Draw chessboard
    for i in range(n):
        for j in range(n):
            color = 'white' if (i + j) % 2 == 0 else 'gray'
            ax.add_patch(plt.Rectangle((j, n - i - 1), 1, 1, color=color))
    
    # Draw queens
    for row, col in enumerate(solution):
        ax.text(col + 0.5, n - row - 0.5, '♛', fontsize=20, ha='center', va='center', color='black')

    ax.set_xticks([])
    ax.set_yticks([])
    ax.set_xlim(0, n)
    ax.set_ylim(0, n)
    ax.set_frame_on(False)

# Generate solutions
solutions = brute_force_n_queens(8)

# Plot first 4 solutions
fig, axes = plt.subplots(2, 2, figsize=(8, 8))
axes = axes.flatten()

for i in range(4):
    plot_board(solutions[i], axes[i])
    axes[i].set_title(f"Solution {i+1}")

plt.tight_layout()
plt.show()