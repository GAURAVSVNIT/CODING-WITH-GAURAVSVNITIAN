# Take N (N >= 10) random 2-dimensional points represented in cartesian coordinate space.
# Store them in a numpy array. Convert them to polar coordinates.
import numpy as np
import math

n = int(input("Enter the number of points to be entered: "))
points = np.random.rand(n, 2) * 10  

print("Points in Cartesian coordinates:")
print(points)

for i in range(n):
    x = points[i][0]
    y = points[i][1]
    r = math.sqrt(x**2 + y**2)
    round_r = round(r, 2)
    theta = math.degrees(math.atan2(y, x))
    round_theta = round(theta, 2)
    if round_theta < 0:
        round_theta += 360
    points[i] = [round_r, round_theta]  

print("Points in Polar coordinates:")
print(points)

