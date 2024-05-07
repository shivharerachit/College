# Here we will use all the functions of numpy library

# Importing the numpy library
import numpy as np

# Creating a 1D array
arr = np.array([1, 2, 3, 4, 5])
print(arr)

# Creating a 2D array
arr = np.array([[1, 2, 3], [4, 5, 6]])
print(arr)

# Creating a 3D array
arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])
print(arr)

# Creating an array with all zeros
arr = np.zeros((2, 3))
print(arr)

# Creating an array with all ones
arr = np.ones((2, 3))
print(arr)

# Creating an array with random values
arr = np.random.random((2, 3))
print(arr)

# Creating an array with random values between 0 and 100
arr = np.random.randint(100, size=(2, 3))
print(arr)

# Creating an array with random values between 0 and 100 and of size 3
arr = np.random.randint(100, size=3)
print(arr)

# Creating an array with random values between 0 and 100 and of size 3 and 3
arr = np.random.randint(100, size=(3, 3))
print(arr)


