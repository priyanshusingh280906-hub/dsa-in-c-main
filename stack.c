#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Defining the maximum size of the stack

int stack[MAX];
int top = -1;  // Initializing top to -1 (empty stack)

// Function to add an element to the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

// Function to remove an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
        return -1;
    } else {
        int poppedValue = stack[top];
        top--;
        printf("Popped %d from the stack.\n", poppedValue);
        return poppedValue;
    }
}

// Function to look at the top element without removing it
void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

// Function to print the entire stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Current Stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("--- Stack Demonstration ---\n");

    push(10);
    push(20);
    push(30);
    display();

    peek();

    pop();
    display();

    // Testing Overflow
    push(40);
    push(50);
    push(60); // This should trigger Overflow because MAX is 5
    display();

    return 0;
}