#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Defining the maximum size of the queue

int queue[MAX];
int front = -1;  // Initializing front to -1 (empty queue)
int rear = -1;   // Initializing rear to -1 (empty queue)

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue is full. Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0;  // If the queue was empty, set front to 0
        }
        rear++;
        queue[rear] = value;  // Add the new value to the rear of the queue
        printf("Enqueued: %d\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;  // Move the front pointer to the next element
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);  // This will show that the queue is full

    display();

    dequeue();
    dequeue();

    display();

    return 0;
}