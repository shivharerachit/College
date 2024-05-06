def inputMatrix(m, n):
    A = []
    for i in range(m):
        row = []
        for j in range(n):
            row.append(int(input(f"Enter [{i+1}][{j+1}] element:" )))
        A.append(row)
    return A

def multiplyMatrix(A, B):
    m = len(A)
    n = len(B[0])
    C = []
    for i in range(m):
        row = []
        for j in range(n):
            sum = 0
            for k in range(len(B)):
                sum += A[i][k] * B[k][j]
            row.append(sum)
        C.append(row)
    return C

row = int(input("Enter the number of rows: "))
column = int(input("Enter the number of columns: "))
print("Enter the elements of the first matrix:")
A = inputMatrix(row, column)
print("Enter the elements of the second matrix:")
B = inputMatrix(row, column)
C = multiplyMatrix(A, B)
print("The resultant matrix is:\n")
for i in C:
    print("|", end="")
    for j in i:
        print("\t", j, end="\t")
    print("|", end="\n")
print("\n")
