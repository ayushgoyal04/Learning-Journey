#include <iostream>
using namespace std;

class Queue {
private:
    // Node structure for the linked list
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* frontNode; // points to front of queue
    Node* rearNode;  // points to rear of queue
    int count;       // number of elements

public:
    // Constructor
    Queue() {
        frontNode = rearNode = nullptr;
        count = 0;
    }

    // Destructor
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // 1. enqueue(x): Add element to the rear
    // Time: O(1), Space: O(1)
    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (rearNode == nullptr) {
            // first element
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        count++;
    }

    // 2. dequeue(): Remove element from the front
    // Time: O(1), Space: O(1)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow: Cannot dequeue from empty queue" << endl;
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;
        if (frontNode == nullptr) {
            rearNode = nullptr; // queue becomes empty
        }
        delete temp;
        count--;
    }

    // 3. front(): Access front element without removing
    // Time: O(1), Space: O(1)
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; // sentinel
        }
        return frontNode->data;
    }

    // 4. size(): Return number of elements
    // Time: O(1), Space: O(1)
    int size() {
        return count;
    }

    // 5. isEmpty(): Check if queue is empty
    // Time: O(1), Space: O(1)
    bool isEmpty() {
        return count == 0;
    }
};

// Example usage
int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << "Front: " << q.front() << endl;   // 5
    cout << "Size: " << q.size() << endl;     // 3

    q.dequeue();
    cout << "Front after dequeue: " << q.front() << endl; // 10

    while (!q.isEmpty()) {
        cout << "Dequeuing: " << q.front() << endl;
        q.dequeue();
    }

    q.dequeue(); // Underflow case

    return 0;
}
