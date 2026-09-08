#include <stdio.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;

void enqueue(int val) {
    if(rear == SIZE-1)
        printf("Queue is full\n");
    else {
        if(front == -1) front = 0;
        rear++;
        queue[rear] = val;
    }
}

void dequeue() {
    if(front == -1 || front > rear)
        printf("Queue is empty\n");
    else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    return 0;
}
