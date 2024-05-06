def inputList(n):
    l = []
    for i in range(n):
        l.append(int(input("Enter the element: ")))
    return l

def linear_search(n, l, no):
    for i in range(0,n):
        if l[i] == no:
            return i+1
    return -1

n = int(input("Enter the number of elements: "))
l = inputList(n)
no = int(input("Enter the number to be searched: "))
result = linear_search(n, l, no)
if result == -1:
    print("Element not found.")
else:
    print("Element found at position", result, ".") 