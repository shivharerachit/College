def checkPrime(n):
    if n > 1:
        for i in range(2, n//2):
            if n % i == 0:
                return False
        return True
    else:
        return False


no = int(input("Enter a number: "))
if checkPrime(no):
    print(no, "is a prime number.")
else:
    print(no, "is not a prime number.")