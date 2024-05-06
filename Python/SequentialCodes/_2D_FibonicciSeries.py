def fibonacci(no):
    a = 0
    b = 1
    if no == 0:
        return a
    else:
        for i in range(2, no):
            c = a + b
            a = b
            b = c
        return b

no = int(input("Enter a number: "))
print("Fibonacci series of the number is: ", fibonacci(no))