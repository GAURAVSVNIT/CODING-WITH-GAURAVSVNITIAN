import numpy as np  
import matplotlib.pyplot as plt  

# Parameters  
a = 1  
b = 1  

# Create a grid of x and y values  
x = np.linspace(-3, 3, 400)  
y_positive = np.sqrt((a**2 * (x**2 - a**2) / b**2) + b**2)  
y_negative = -y_positive  

# Plotting the hyperbola  
plt.figure(figsize=(8, 6))  
plt.plot(x, y_positive, label='Upper Branch', color='blue')  
plt.plot(x, y_negative, label='Lower Branch', color='blue')  
plt.axhline(0, color='black', lw=0.5, ls='--')  
plt.axvline(0, color='black', lw=0.5, ls='--')  
plt.xlim(-3, 3)  
plt.ylim(-3, 3)  
plt.title('Plot of the Hyperbola')  
plt.xlabel('x')  
plt.ylabel('y')  
plt.grid()  
plt.legend()  
plt.show()