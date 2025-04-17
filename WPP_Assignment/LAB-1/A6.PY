# 6. Consider a 3-D co-ordinate space. Input 10 3-D points. Find the nearest neighbour for each
# of the points in your 3-D space and store them in a list. The final output is a list with each
# consisting of a point and its nearest neighbour. [Hint: Use distance between two points
# formula

import math

def distance(p1, p2):
    return math.sqrt((p1[0]-p2[0])**2 + (p1[1]-p2[1])**2 + (p1[2]-p2[2])**2)

def nearest_neighbour(points):
    n = len(points)
    nearest = []
    for i in range(n):
        min_dist = float('inf')
        for j in range(n):
            if i != j:
                dist = distance(points[i], points[j])
                if dist < min_dist:
                    min_dist = dist
                    neighbour = points[j]
        nearest.append([points[i], neighbour])
    return nearest

points = []
print("Enter 10 3-D points: ")
for i in range(10):
    x, y, z = map(int, input().split())
    points.append([x, y, z])

nearest = nearest_neighbour(points)
for i in nearest:
    print(i)



