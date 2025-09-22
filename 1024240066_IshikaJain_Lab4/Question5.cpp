#include <iostream>
#include <queue>
using namespace std;

class StackTwoQueues {
    queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x); 
        while (!q1.empty()) { 
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2); 
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack is EMPTY!" << endl;
            return;
        }
        cout << "Popped: " << q1.front() << endl;
        q1.pop();
    }

    void top() {
        if (q1.empty()) {
            cout << "Stack is EMPTY!" << endl;
            return;
        }
        cout << "Top: " << q1.front() << endl;
    }

    bool empty() {
        return q1.empty();
    }
};

class StackOneQueue {
    queue<int> q;

public:
    void push(int x) {
        int sz = q.size();
        q.push(x);  
        for (int i = 0; i < sz; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack is EMPTY!" << endl;
            return;
        }
        cout << "Popped: " << q.front() << endl;
        q.pop();
    }

    void top() {
        if (q.empty()) {
            cout << "Stack is EMPTY!" << endl;
            return;
        }
        cout << "Top: " << q.front() << endl;
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    StackTwoQueues stack2Q;
    StackOneQueue stack1Q;
    int choice, method, value;

    cout << "Choose Implementation:\n";
    cout << "1. Stack using Two Queues\n";
    cout << "2. Stack using One Queue\n";
    cout << "Enter choice: ";
    cin >> method;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Check if Empty\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                if (method == 1)
                    stack2Q.push(value);
                else
                    stack1Q.push(value);
                break;

            case 2:
                if (method == 1)
                    stack2Q.pop();
                else
                    stack1Q.pop();
                break;

            case 3:
                if (method == 1)
                    stack2Q.top();
                else
                    stack1Q.top();
                break;

            case 4:
                if (method == 1)
                    cout << (stack2Q.empty() ? "Stack is EMPTY\n" : "Stack is NOT EMPTY\n");
                else
                    cout << (stack1Q.empty() ? "Stack is EMPTY\n" : "Stack is NOT EMPTY\n");
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
