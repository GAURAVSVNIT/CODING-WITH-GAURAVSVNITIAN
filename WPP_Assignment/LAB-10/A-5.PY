# The bisection method is a technique for finding solutions (roots) to equations with a single 
# unknown  variable.  Given  a  polynomial  function  f,  try  to  find  an  initial  interval  off  by 
# random probe.  Store all the updates in an Numpy array. Plot the root finding process using 
# the matplotlib/pyplot library. 
 
import numpy as np
import matplotlib.pyplot as plt
import random

# Define the polynomial function
def f(x):
    return x**3 - 6*x**2 + 11*x - 6  # Roots: 1, 2, 3

# Function to randomly probe for an interval [a, b] where f(a) * f(b) < 0
def find_initial_interval():
    while True:
        a = random.uniform(0, 5)
        b = random.uniform(0, 5)
        if a > b:
            a, b = b, a
        if f(a) * f(b) < 0:
            return a, b

# Bisection method implementation
def bisection(f, a, b, tol=1e-5, max_iter=100):
    iterations = []
    for i in range(max_iter):
        c = (a + b) / 2
        iterations.append(c)
        if abs(f(c)) < tol or (b - a) / 2 < tol:
            break
        if f(a) * f(c) < 0:
            b = c
        else:
            a = c
    return np.array(iterations)

# Find a suitable interval using random probing
a, b = find_initial_interval()
print(f"Initial interval found: [{a:.4f}, {b:.4f}]")

# Run the bisection method
updates = bisection(f, a, b)

# Plotting
x_vals = np.linspace(0, 5, 400)
y_vals = f(x_vals)

plt.figure(figsize=(10, 6))
plt.plot(x_vals, y_vals, label='f(x)', color='blue')
plt.axhline(0, color='black', linewidth=0.5)

# Mark the iterations
for i, x in enumerate(updates):
    plt.plot(x, f(x), 'ro')
    plt.text(x, f(x), f'{i+1}', fontsize=8, color='green')

plt.title('Bisection Method Root Finding Process')
plt.xlabel('x')
plt.ylabel('f(x)')
plt.legend()
plt.grid(True)
plt.show()

 
 
 
 
 
 
 
 
 
 
 
 
