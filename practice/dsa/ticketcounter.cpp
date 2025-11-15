#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int customer) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! No space for new customers.\n");
        return;
    }
    if (front == -1) front = 0;
    rear++;
    queue[rear] = customer;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! No customers to serve.\n");
        return;
    }
    printf("Serving customer: %d\n", queue[front]);
    front++;
}

void display() {
    if (front == -1 || front > rear) {
        printf("No customers in line.\n");
        return;
    }
    printf("\nCurrent Queue:\n");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    display();

    dequeue();
    dequeue();

    display();

    return 0;
}
