def fact(no):
    if no == 0:
        return 1
    else:
        return no * fact(no-1)
    
no = int(input("Enter a number: "))
fact = 1
print("Factorial of the number is: ", fact(no))