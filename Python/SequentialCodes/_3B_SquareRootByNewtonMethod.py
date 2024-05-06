def sqrt_newton(no):
    guess = no/2
    while abs(guess*guess-no) > 0.0001:
        guess = guess - (guess*guess-no)/(2*guess)
    return guess


no = int(input("Enter the number: "))
print("The square root of", no, "is", sqrt_newton(no), ".")