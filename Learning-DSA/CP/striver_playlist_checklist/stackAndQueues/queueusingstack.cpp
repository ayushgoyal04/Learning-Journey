#include <iostream>
#include <stack>
using namespace std;

class Queue {
private:
    stack<int> stack1; // for enqueue
    stack<int> stack2; // for dequeue and front

    // Helper: Move all elements from stack1 to stack2
    void transferIfNeeded() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
    }

public:
    // Enqueue: push to stack1
    // Time: O(1), Space: O(1)
    void enqueue(int x) {
        stack1.push(x);
    }

    // Dequeue: pop from stack2, after transfer if needed
    // Amortized Time: O(1), Worst: O(n) when transferring
    void dequeue() {
        transferIfNeeded();
        if (stack2.empty()) {
            cout << "Queue Underflow: Cannot dequeue from empty queue" << endl;
            return;
        }
        stack2.pop();
    }

    // Front: peek from stack2, after transfer if needed
    // Amortized Time: O(1), Worst: O(n) when transferring
    int front() {
        transferIfNeeded();
        if (stack2.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return stack2.top();
    }

    // isEmpty(): both stacks must be empty
    // Time: O(1)
    bool isEmpty() {
        return stack1.empty() && stack2.empty();
    }

    // size(): total elements in both stacks
    // Time: O(1)
    int size() {
        return stack1.size() + stack2.size();
    }
};

// Example usage
int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Front: " << q.front() << endl; // 1
    q.dequeue();
    cout << "Front after dequeue: " << q.front() << endl; // 2

    q.enqueue(4);

    while (!q.isEmpty()) {
        cout << "Dequeuing: " << q.front() << endl;
        q.dequeue();
    }

    q.dequeue(); // Underflow case

    return 0;
}
