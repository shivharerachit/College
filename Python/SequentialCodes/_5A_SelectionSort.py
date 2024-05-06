def inputList(n):
    l = []
    for i in range(n):
        l.append(int(input("Enter the element: ")))
    return l

def selectionSort(arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(i+1, len(arr)):
            if arr[min_index] > arr[j]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

n = int(input("Enter the number of elements: "))
l = inputList(n)
selectionSort(l)
print("The sorted list is:", l)