def inputList(n):
    l = []
    for i in range(n):
        l.append(int(input("Enter the element: ")))
    return l

def mergeSort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        L = arr[:mid]
        R = arr[mid:]
        
        mergeSort(L)
        mergeSort(R)
        
        i = j = k = 0
        
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
        
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

def binarySearch(l, no):
    low = 0
    high = len(l)-1
    while low <= high:
        mid = (low+high)//2
        if l[mid] == no:
            return mid
        elif l[mid] < no:
            low = mid+1
        else:
            high = mid-1
    return -1

n = int(input("Enter the number of elements: "))
l=inputList(n)
mergeSort(l)
no = int(input("Enter the number to be searched: "))
print("The sorted list is:", l)
if binarySearch(l, no) == -1:
    print("The number is not present in the list.")
else:
    print("The number is present at ", binarySearch(l, no)+1, " position.")
    