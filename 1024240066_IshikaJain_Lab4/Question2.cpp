#include <iostream>
using namespace std;

class CircularQueue {
    int *queue;  
    int SIZE;     
    int front, rear;

public:
    CircularQueue(int s) {
        SIZE = s;
        queue = new int[SIZE];
        front = -1;
        rear = -1;
    }

    ~CircularQueue() {
        delete[] queue;
    }

    bool isFull() {
        return ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is FULL! Cannot enqueue " << value << endl;
        } else {
            if (front == -1) front = 0; 
            rear = (rear + 1) % SIZE;
            queue[rear] = value;
            cout << value << " enqueued to queue" << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is EMPTY! Cannot dequeue" << endl;
        } else {
            cout << queue[front] << " dequeued from queue" << endl;
            if (front == rear) { 
                front = rear = -1;
            } else {
                front = (front + 1) % SIZE;
            }
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is EMPTY! No front element" << endl;
        } else {
            cout << "Front element: " << queue[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is EMPTY!" << endl;
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (true) {
                cout << queue[i] << " ";
                if (i == rear) break;
                i = (i + 1) % SIZE;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter size of the queue: ";
    cin >> n;

    CircularQueue cq(n);
    int choice, value;

    while (true) {
        cout << "\n--- Circular Queue Menu ---\n";
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
                cq.enqueue(value);
                break;
            case 2:
                cq.dequeue();
                break;
            case 3:
                cq.peek();
                break;
            case 4:
                cq.display();
                break;
            case 5:
                if (cq.isEmpty())
                    cout << "Queue is EMPTY\n";
                else
                    cout << "Queue is NOT EMPTY\n";
                break;
            case 6:
                if (cq.isFull())
                    cout << "Queue is FULL\n";
                else
                    cout << "Queue is NOT FULL\n";
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
