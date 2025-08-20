/*
Stack Data Structure Notes
-------------------------
- A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle.
- The last element inserted is the first one to be removed.

Main Operations:
1. push(x): Insert element x onto the stack.
2. pop(): Remove the top element from the stack.
3. top()/peek(): Access the top element without removing it.
4. size(): Returns the number of elements in the stack.
5. isEmpty(): Checks if the stack is empty.

Implementation:
- Can be implemented using arrays, vectors, or linked lists.
- STL provides std::stack in C++.

Applications:
- Function call/return management (call stack)
- Undo/redo operations in editors
- Expression evaluation and syntax parsing
- Backtracking algorithms (DFS, maze solving)

Key Points:
- Only the top element is accessible at any time.
- Stack overflow occurs if you push onto a full stack (in fixed-size implementations).
- Stack underflow occurs if you pop from an empty stack.
*/
#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;         // dynamic array to store elements
    int capacity;     // maximum size of the stack
    int topIndex;     // index of the current top element

public:
    // Constructor to initialize stack
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1; // empty stack
    }

    // Destructor to clean up memory
    ~Stack() {
        delete[] arr;
    }

    // 1. push(x): Insert element onto the stack
    // Time: O(1), Space: O(1)
    void push(int x) {
        if (topIndex == capacity - 1) {
            cout << "Stack Overflow: Cannot push " << x << endl;
            return;
        }
        arr[++topIndex] = x;
    }

    // 2. pop(): Remove the top element
    // Time: O(1), Space: O(1)
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Cannot pop from empty stack" << endl;
            return;
        }
        topIndex--;
    }

    // 3. top(): Return top element without removing it
    // Time: O(1), Space: O(1)
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1; // convention: return sentinel value
        }
        return arr[topIndex];
    }

    // 4. size(): Return current number of elements
    // Time: O(1), Space: O(1)
    int size() {
        return topIndex + 1;
    }

    // 5. isEmpty(): Check if stack is empty
    // Time: O(1), Space: O(1)
    bool isEmpty() {
        return topIndex == -1;
    }
};

// Example usage
int main() {
    Stack st(5); // create a stack of size 5

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;      // 30
    cout << "Size: " << st.size() << endl;    // 3

    st.pop();
    cout << "Top after pop: " << st.top() << endl; // 20

    while (!st.isEmpty()) {
        cout << "Popping: " << st.top() << endl;
        st.pop();
    }

    st.pop(); // Underflow case

    return 0;
}
