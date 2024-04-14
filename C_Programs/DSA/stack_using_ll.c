// Stack using LL

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stock {
    struct Node* top;
};

void initialize(struct Stock* stack) {
    stack->top = NULL;
}

bool isEmpty(struct Stock* stack) {
    return stack->top == NULL;
}

void push(struct Stock* stack, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("Pushed %d to the stack.\n", data);
}

void pop(struct Stock* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop element, the stack is empty.\n");
        return;
    }
    struct Node* temp = stack->top;
    stack->top = stack->top->next;
    printf("Popped %d from the stack.\n", temp->data);
    free(temp);
}

void display(struct Stock* stack) {
    if (isEmpty(stack)) {
        printf("The stack is empty.\n");
        return;
    }
    struct Node* current = stack->top;
    printf("Elements in the stack: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Stock stock;
    initialize(&stock);
    int choice, element;

	printf("Name : Rachit Shivhare\n");
	printf("Enrollment No. : 0827CS221213\n");

    while (1) {
        printf("\nStack Operations Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Is Empty\n");
        printf("4. Is Full (Not Applicable for Linked List)\n");
        printf("5. Quit\n");
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
                if (isEmpty(&stock)) {
                    printf("The stack is empty.\n");
                } else {
                    printf("The stack is not empty.\n");
                }
                break;
            case 4:
                printf("Is Full operation is not applicable for a linked list implementation of a stack.\n");
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}