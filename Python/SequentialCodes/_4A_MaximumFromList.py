def inputList(n):
    l = []
    for i in range(n):
        l.append(int(input("Enter the element: ")))
    return l

def maxList(l, n):
    max = l[0]
    for i in range(1, n):
        if l[i] > max:
            max = l[i]
    return max

n = int(input("Enter the number of elements: "))
l = inputList(n)
print("The maximum element in the list is", maxList(l, n), ".")