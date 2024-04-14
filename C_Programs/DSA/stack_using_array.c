// Stack using array

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5 // Define the maximum size of the stock

struct Stock {
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stock* stack) {
    stack->top = -1;
}

bool isFull(struct Stock* stack) {
    return stack->top == MAX_SIZE - 1;
}

bool isEmpty(struct Stock* stack) {
    return stack->top == -1;
}

void push(struct Stock* stack, int element) {
    if (isFull(stack)) {
        printf("Stack Overflow: Cannot push element, the stack is full.\n");
        return;
    }
    stack->items[++stack->top] = element;
    printf("Pushed %d to the stack.\n", element);
}

void pop(struct Stock* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop element, the stack is empty.\n");
        return;
    }
    printf("Popped %d from the stack.\n", stack->items[stack->top--]);
}

void display(struct Stock* stack) {
    if (isEmpty(stack)) {
        printf("The stack is empty.\n");
        return;
    }
    printf("Elements in the stack: ");
    for (int i = 0; i <= stack->top; ++i) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {
    struct Stock stock;
    initialize(&stock);
    int choice, element;
	
	printf("Name : Rachit Shivhare\n");
	printf("Enrollment No. : 0827CS221213\n\n");
	
    while (1) {
        printf("\nStack Operations Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Is Empty\n");
        printf("5. Is Full\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(&stock, element);
                break;
            case 2:
                pop(&stock);
                break;
            case 3:
                display(&stock);
                break;
            case 4:
                if (isEmpty(&stock)) {
                    printf("The stack is empty.\n");
                } else {
                    printf("The stack is not empty.\n");
                }
                break;
            case 5:
                if (isFull(&stock)) {
                    printf("The stack is full.\n");
                } else {
                    printf("The stack is not full.\n");
                }
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}