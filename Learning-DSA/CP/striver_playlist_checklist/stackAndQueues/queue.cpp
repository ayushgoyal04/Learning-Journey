/*
Queue Data Structure Notes
--------------------------
- A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle.
- The first element inserted is the first one to be removed.

Main Operations:
1. enqueue(x): Insert element x at the rear of the queue.
2. dequeue(): Remove the front element from the queue.
3. front(): Access the front element without removing it.
4. size(): Returns the number of elements in the queue.
5. isEmpty(): Checks if the queue is empty.

Implementation:
- Can be implemented using arrays, linked lists, or circular buffers.
- STL provides std::queue in C++.

Applications:
- Scheduling tasks (CPU scheduling, printer queues)
- Breadth-first search (BFS) in graphs
- Data buffering (IO buffers, streaming)
- Simulation systems (e.g., queues in supermarkets or networks)

Key Points:
- Only the front element is removed, and new elements are added at the rear.
- Queue overflow occurs if you enqueue into a full queue (in fixed-size implementations).
- Queue underflow occurs if you dequeue from an empty queue.
*/

#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;       // dynamic array to hold elements
    int capacity;   // total capacity of the queue
    int frontIndex; // index of front element
    int rearIndex;  // index where next element will be inserted
    int count;      // current size of the queue

public:
    // Constructor
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = 0;
        count = 0;
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }

    // 1. enqueue(x): Insert element at the rear
    // Time: O(1), Space: O(1)
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow: Cannot enqueue " << x << endl;
            return;
        }
        arr[rearIndex] = x;
        rearIndex = (rearIndex + 1) % capacity; // circular increment
        count++;
    }

    // 2. dequeue(): Remove element from the front
    // Time: O(1), Space: O(1)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow: Cannot dequeue from empty queue" << endl;
            return;
        }
        frontIndex = (frontIndex + 1) % capacity; // circular increment
        count--;
    }

    // 3. front(): Access front element
    // Time: O(1), Space: O(1)
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; // sentinel value
        }
        return arr[frontIndex];
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

    // Optional: isFull(): Check if queue is full
    bool isFull() {
        return count == capacity;
    }
};

// Example usage
int main() {
    Queue q(5); // create a queue of size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;   // 10
    cout << "Size: " << q.size() << endl;     // 3

    q.dequeue();
    cout << "Front after dequeue: " << q.front() << endl; // 20

    while (!q.isEmpty()) {
        cout << "Dequeuing: " << q.front() << endl;
        q.dequeue();
    }

    q.dequeue(); // Underflow case

    return 0;
}
