#include <iostream>
using namespace std;

class Stack {
private:
    // Node structure for linked list
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* topNode;  // pointer to top of the stack
    int count;      // number of elements in the stack

public:
    // Constructor
    Stack() {
        topNode = nullptr;
        count = 0;
    }

    // Destructor
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    // 1. push(x): Insert element at the top
    // Time: O(1), Space: O(1)
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
        count++;
    }

    // 2. pop(): Remove the top element
    // Time: O(1), Space: O(1)
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Cannot pop from empty stack" << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        count--;
    }

    // 3. top(): Access top element without removing
    // Time: O(1), Space: O(1)
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1; // sentinel value
        }
        return topNode->data;
    }

    // 4. size(): Return number of elements
    // Time: O(1), Space: O(1)
    int size() {
        return count;
    }

    // 5. isEmpty(): Check if the stack is empty
    // Time: O(1), Space: O(1)
    bool isEmpty() {
        return topNode == nullptr;
    }
};

// Example usage
int main() {
    Stack st;

    st.push(100);
    st.push(200);
    st.push(300);

    cout << "Top: " << st.top() << endl;      // 300
    cout << "Size: " << st.size() << endl;    // 3

    st.pop();
    cout << "Top after pop: " << st.top() << endl; // 200

    while (!st.isEmpty()) {
        cout << "Popping: " << st.top() << endl;
        st.pop();
    }

    st.pop(); // Underflow case

    return 0;
}
