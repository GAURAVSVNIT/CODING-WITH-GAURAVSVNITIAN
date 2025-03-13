"""
Create a class for representing any 2-D point or vector. The methods inside this class include
its magnitude and its rotation with respect to the X-axis. Using the objects define functions for
calculating the distance between two vectors, dot product, cross product of two vectors. Extend
the 2-D vectors into 3-D using the concept of inheritance. Update the methods according to 3-
D.
"""
import math

class Vector2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def magnitude(self):
        return math.sqrt(self.x**2 + self.y**2)

    def angle_with_x_axis(self):
        return math.degrees(math.atan2(self.y, self.x))

    def distance_to(self, other):
        if not isinstance(other, Vector2D):
            raise TypeError("Distance calculation requires another 2D vector")
        return math.sqrt((other.x - self.x)**2 + (other.y - self.y)**2)

    def dot(self, other):
        if not isinstance(other, Vector2D):
            raise TypeError("Dot product requires another 2D vector")
        return self.x * other.x + self.y * other.y

    def cross(self, other):
        if not isinstance(other, Vector2D):
            raise TypeError("Cross product requires another 2D vector")
        return self.x * other.y - self.y * other.x

    def __repr__(self):
        return f"Vector2D({self.x}, {self.y})"


class Vector3D(Vector2D):
    def __init__(self, x, y, z):
        super().__init__(x, y)
        self.z = z

    def magnitude(self):
        return math.sqrt(self.x**2 + self.y**2 + self.z**2)

    def angle_with_x_axis(self):
        return math.degrees(math.atan2(math.sqrt(self.y**2 + self.z**2), self.x))

    def distance_to(self, other):
        if not isinstance(other, Vector3D):
            raise TypeError("Distance calculation requires another 3D vector")
        return math.sqrt((other.x - self.x)**2 + (other.y - self.y)**2 + (other.z - self.z)**2)

    def dot(self, other):
        if not isinstance(other, Vector3D):
            raise TypeError("Dot product requires another 3D vector")
        return self.x * other.x + self.y * other.y + self.z * other.z

    def cross(self, other):
        if not isinstance(other, Vector3D):
            raise TypeError("Cross product requires another 3D vector")
        return Vector3D(
            self.y * other.z - self.z * other.y,
            self.z * other.x - self.x * other.z,
            self.x * other.y - self.y * other.x
        )

    def __repr__(self):
        return f"Vector3D({self.x}, {self.y}, {self.z})"


def get_vector_input(dimension):
    while True:
        try:
            if dimension == 2:
                x = float(input("Enter x: "))
                y = float(input("Enter y: "))
                return Vector2D(x, y)
            elif dimension == 3:
                x = float(input("Enter x: "))
                y = float(input("Enter y: "))
                z = float(input("Enter z: "))
                return Vector3D(x, y, z)
            else:
                print("Invalid dimension. Please enter again.")
        except ValueError:
            print("Invalid input. Please enter numerical values.")


def vector_menu():
    while True:
        print("\n1. 2D Vector")
        print("2. 3D Vector")
        print("3. Exit")

        choice = input("Choose Vector Type (1/2) or Exit (3): ")

        if choice == '1':
            v1 = get_vector_input(2)
            v2 = get_vector_input(2)

            if v1 and v2:
                print("\nResults:")
                print(f"Vector 1: {v1}")
                print(f"Vector 2: {v2}")
                print(f"Magnitude of v1: {v1.magnitude():.4f}")
                print(f"Angle with x-axis of v1: {v1.angle_with_x_axis():.4f} degrees")
                print(f"Distance between v1 and v2: {v1.distance_to(v2):.4f}")
                print(f"Dot product of v1 and v2: {v1.dot(v2):.4f}")
                print(f"Cross product of v1 and v2: {v1.cross(v2):.4f}")

        elif choice == '2':
            v1 = get_vector_input(3)
            v2 = get_vector_input(3)

            if v1 and v2:
                print("\nResults:")
                print(f"Vector 1: {v1}")
                print(f"Vector 2: {v2}")
                print(f"Magnitude of v1: {v1.magnitude():.4f}")
                print(f"Angle with x-axis of v1: {v1.angle_with_x_axis():.4f} degrees")
                print(f"Distance between v1 and v2: {v1.distance_to(v2):.4f}")
                print(f"Dot product of v1 and v2: {v1.dot(v2):.4f}")
                print(f"Cross product of v1 and v2: {v1.cross(v2)}")

        elif choice == '3':
            print("Exiting program.")
            break
        else:
            print("Invalid choice! Please enter 1, 2, or 3.")


if __name__ == "__main__":
    vector_menu()
