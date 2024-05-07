# To write a Python program for command line arguments.

import sys
import subprocess

print("This is the name of the script: ", sys.argv[0])
print("Number of arguments: ", len(sys.argv))
print("Type of arguments: ", type(sys.argv))
print("The arguments are: ", str(sys.argv))