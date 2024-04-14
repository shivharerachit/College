#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk %d from %c to %c\n", n, source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n, num1, num2, flag = 1;
    int choice;

    printf("Rachit Shivahare\n");
    printf("0827CS221213\n");
    printf("Recursion (Factorial, Fibonacci, Greatest Common Divisor (GCD), Tower of Hanoi)\n");

    while (flag == 1) {
        printf("------------------Menu Driven Program-------------------\n");
        printf("1. Find Factorial.\n");
        printf("2. Find Fibonacci.\n");
        printf("3. Find GCD.\n");
        printf("4. Solve Tower of Hanoi.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printf("Factorial of %d is %d\n", n, factorial(n));
                break;
            case 2:
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
                break;
            case 3:
                printf("Enter two numbers for GCD calculation: ");
                scanf("%d %d", &num1, &num2);
                printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
                break;
            case 4:
                printf("Enter the number of disks for Tower of Hanoi: ");
                scanf("%d", &n);
                towerOfHanoi(n, 'A', 'B', 'C');
                break;
            default:
                printf("You have entered the wrong choice.\n");
                break;
        }

        printf("If you want to repeat the program, press 1: ");
        scanf("%d", &flag);
    }

    return 0;
}