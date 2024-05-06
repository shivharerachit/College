def firstNPrimeNumber(n):
    primeList = []
    num = 2
    while len(primeList) < n:
        for i in range(2, num):
            if num % i == 0:
                break
        else:
            primeList.append(num)
        num += 1
    return primeList

n = int(input("Enter the value of n: "))
for i in firstNPrimeNumber(n):
    print(i, end=" ")
print()