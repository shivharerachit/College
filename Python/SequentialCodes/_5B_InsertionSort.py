def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

def inputList(n):
    l = []
    for i in range(n):
        l.append(int(input("Enter the element: ")))
    return l

n = int(input("Enter the number of elements: "))
l = inputList(n)
insertionSort(l)
print("The sorted list is:", l)