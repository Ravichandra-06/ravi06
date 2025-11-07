#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
// Enqueue operation
void enqueue(int value) {
    
    if (rear == SIZE - 1) {
        printf("Queue is Full\n");
        return;
    }
    if (front == -1)  // First element
        front = 0;
    rear++;
    queue[rear] = value;
    printf("%d inserted\n", value);
}
// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("%d deleted\n", queue[front]);
    front++;

    // Reset queue if it becomes empty
    if (front > rear)
        front = rear = -1;
}
// Peek operation
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Front element = %d\n", queue[front]);
}
// Display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}
int main() {
    int choice, value;
    printf("Queue Operations using Array\n");
    printf("--------------------------------\n");
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
