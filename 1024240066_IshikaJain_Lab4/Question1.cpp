#include <iostream>
using namespace std;

bool isFull(int rear, int SIZE) {
    return (rear == SIZE - 1);
}

bool isEmpty(int front, int rear) {
    return (front == -1 || front > rear);
}

void enqueue(int &rear, int &front, int SIZE, int queue[], int value) {
    if (isFull(rear, SIZE)) {
        cout << "Queue is FULL! Cannot enqueue " << value << endl;
    } else {
        if (front == -1) front = 0;  
        rear++;
        queue[rear] = value;
        cout << value << " enqueued to queue" << endl;
    }
}

void dequeue(int &rear, int &front, int queue[]) {
    if (isEmpty(front, rear)) {
        cout << "Queue is EMPTY! Cannot dequeue" << endl;
    } else {
        cout << queue[front] << " dequeued from queue" << endl;
        front++;
    }
}

void display(int rear, int front, int queue[]) {
    if (isEmpty(front, rear)) {
        cout << "Queue is EMPTY!" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void peek(int front, int rear, int queue[]) {
    if (isEmpty(front, rear)) {
        cout << "Queue is EMPTY! No front element" << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

int main() {
    int SIZE;
    cout << "Enter the size of the queue: ";
    cin >> SIZE;
    int queue[SIZE];
    int rear = -1, front = -1;

    int choice, value;

    while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(rear, front, SIZE, queue, value);
                break;
            case 2:
                dequeue(rear, front, queue);
                break;
            case 3:
                peek(front, rear, queue);
                break;
            case 4:
                display(rear, front, queue);
                break;
            case 5:
                if (isEmpty(front, rear))
                    cout << "Queue is EMPTY" << endl;
                else
                    cout << "Queue is NOT EMPTY" << endl;
                break;
            case 6:
                if (isFull(rear, SIZE))
                    cout << "Queue is FULL" << endl;
                else
                    cout << "Queue is NOT FULL" << endl;
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}
